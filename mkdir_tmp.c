#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void mkdirs(char *dir_path) 
{
    char buff[1024];
    char *p_dir = buff;

    strcpy(buff, dir_path);

    buff[1024 - 1] = '\0';

    while(*p_dir) {
        if(*p_dir == '/') {
            *p_dir = '\0';
            mkdir(buff, 0777);
            *p_dir = '/';
        }
        p_dir++;
    }
}

int main(int argc, char* argv[])
{

    if(argc < 2) {
        printf("usage: mkdir [-p] directory_name ... \n");
        return 1;
    }

    if(argc == 2) {
        if(mkdir(argv[1], 0777) == -1) {
            fprintf(stderr, "mkdir: %s: File exists\n", argv[1]);
            exit(1);
        }
    }
    else if(argc == 3) {
        mkdirs(argv[2]);
    } 

}
