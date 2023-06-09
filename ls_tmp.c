#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

#define SIZE 1024
int main(int argc, char* argv[]) {
    int opt;
    int i = 0, a = 0;
    char buff[SIZE];
    DIR *dir = NULL;
    struct dirent *e = NULL;
    struct stat d_stat; 

    while((opt = getopt(argc, argv, "ia")) != -1) {
        switch(opt) {
            case 'i':
                i = 1;
                break;
            case 'a':
                a = 1;
                break;
            default:
                printf("잘못된 옵션\n");
                return 1;
        }
    }

    getcwd(buff, SIZE);
    if((dir = opendir(buff)) == NULL) {
        printf("current directory open error\n");
        return 1;
    }

    while((e = readdir(dir)) != NULL) {
        if(!a && (strcmp(e->d_name, ".") == 0 || strcmp(e->d_name, "..") == 0)) continue;
        lstat(e->d_name, &d_stat);
        if(i) printf("%-10d ", (unsigned int)d_stat.st_ino);
        printf("%-10s\t", e->d_name);
    }
    printf("\n");

    return 0;
}

