#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

void ls_inode(struct stat buf)
{
    printf("%-4d  ", (unsigned int)buf.st_ino);
}

void ls_mode(struct stat buf)
{
    printf("%-6lo  ", (unsigned long)buf.st_mode);
}

void ls_fsize(struct stat buf)
{
    printf("%-8lld  ", buf.st_size);
}

void ls_option(struct stat buf, char* option)
{
    if(strcmp(option, "-l") == 0) {
        ls_mode(buf);
        ls_inode(buf);
        ls_fsize(buf);
    }
    else if(strcmp(option, "-i") == 0) {
        ls_inode(buf);
    }
}

int main(int argc, char *argv[]) 
{
    char* cwd = (char*)malloc(sizeof(char)*1024);
    DIR* dir = NULL;
    struct dirent* entry;
    struct stat buf;
    char option;

    getcwd(cwd, 1024); //현재 작업 디렉토리 경로 구하기

    if((dir = opendir(cwd)) == NULL)
    {
        printf("current directory error\n");
        exit(1);
    }

    while((entry = readdir(dir)) != NULL) { 
        lstat(entry->d_name, &buf);
        if(S_ISREG(buf.st_mode))
            printf("%-4s ", "FILE");
        else if(S_ISDIR(buf.st_mode))
            printf("%-4s ", "DIR");
        else
            printf("%-4s ", "???");

        if(argc > 1)
            ls_option(buf, argv[1]);

        printf("%s  \n", entry->d_name);
    }

    free(cwd);
    closedir(dir);

    return 0;
}
