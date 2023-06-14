#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#define SIZE 1024

int mkdirs(char *dir_path, mode_t mode);
mode_t string_to_mode(const char* str);

int main(int argc, char* argv[]) {
    int opt;
    int m = 0, p = 0, v = 0;
    mode_t mode = 0777;
    
    if(argc == 1) {
        printf("usage: mkdir [-pv] [-m mode] directory_name ...\n");
        return 1;
    }

    while((opt = getopt(argc, argv, "m:pv")) != -1) {
        switch(opt) {
            case 'm':
                m = 1;
                mode = string_to_mode(optarg);
                break;
            case 'p':
                p = 1;
                break;
            case 'v':
                v = 1;
                break;
            default:
                printf("잘못된 옵션\n");
                return 1;
        }
    }

    if(argc == optind) {
        printf("파일명을 입력해주세요\n");
        return 1;
    }
    
    if(!p && mkdir(argv[optind], mode) == -1 ) {
        printf("mkdir: %s: File exists\n", argv[optind]);
        return 1;
    } else if(p && mkdirs(argv[optind], mode) == -1) {
        printf("error\n");
        return 1;
    }

    if(v) printf("%s\n", argv[optind]);
    return 0;
}

int mkdirs(char *path, mode_t mode) {
    char buff[SIZE];
    char *p_dir = buff;

    strcpy(buff, path);

    buff[SIZE - 1] = '\0';

    while(*p_dir) {
        if(*p_dir == '/') {
            *p_dir = '\0';
            if(mkdir(buff, mode) == -1) {
                return -1;
            }
            *p_dir = '/';
        }
        p_dir++;
    }
    return -0;
}

mode_t string_to_mode(const char* str) {
    return (mode_t)strtol(str, NULL, 8);
}

