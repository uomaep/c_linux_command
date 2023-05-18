#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

int rmdirs(const char *path, int force)
{
    DIR *dir_ptr = NULL;
    struct dirent *file = NULL;
    struct stat buf;
    char filename[1024];

    if((dir_ptr = opendir(path)) == NULL) {
        return unlink(path);
    }

    while((file = readdir(dir_ptr)) != NULL) {
        if(strcmp(file->d_name, ".") == 0 || strcmp(file->d_name, "..") == 0) {
            continue;
        }

        sprintf(filename, "%s/%s", path, file->d_name);

        if(lstat(filename, &buf) == -1) {
            continue;
        }

        if(S_ISDIR(buf.st_mode)) {
            if(rmdirs(filename, force) == -1 && !force) {
                return -1;
            }
        } else if(S_ISREG(buf.st_mode) || S_ISLNK(buf.st_mode)) {
            if(unlink(filename) == -1 && !force) {
                return -1;
            }
        }
    }

    closedir(dir_ptr);

    return rmdir(path);
}

int main(int argc, char* argv[])
{
    if(argc < 2) {
        fprintf(stderr, "usage: rm [-r | -f] file\n");
        exit(1);
    }

    if(argc == 2) {
        if(remove(argv[1]) == -1) {
            printf("파일 삭제 실패\n");
        }
    }
    else if(argc == 3 && strcmp(argv[1], "-r") == 0) {
        rmdirs(argv[2], 0);
    }
}
