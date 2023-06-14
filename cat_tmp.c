#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 4096

int cat(char* filename, int n, int b, int E, int T);
int main(int argc, char* argv[]) {
    int n = 0, b = 0, E = 0, T = 0;
    int opt;
    while((opt = getopt(argc, argv, "nbET")) != -1) {
        switch(opt) {
            case 'n':
                n = 1;
                break;
            case 'b':
                b = 1;
                break;
            case 'E':
                E = 1;
                break;
            case 'T':
                T = 1;
                break;
            default:
                printf("잘못된 옵션\n");
                return 1;
        }
    }

    if(argc == 1) {
        char buffer[100];
        while(fgets(buffer, 100, stdin) != NULL) {
            buffer[strcspn(buffer, "\n")] = '\0';
            printf("%s\n", buffer);
        }
        return 0;
    }

    char* filename = argv[optind];
    return cat(filename, n, b, E, T);
}

int cat(char* filename, int n, int b, int E, int T) {
    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("존재하지 않은 파일입니다.\n");
        return 1;
    }

    char buff[SIZE];
    int line = 0;

    while(fgets(buff, SIZE, fp) != NULL) {
        if(b && buff[0] != '\n') printf("%6d  ", ++line);
        else if(!b && n) printf("%6d  ", ++line);
        if(b && E && buff[0] == '\n') printf("%6s  ", ""); 

        int i = 0;
        while(buff[i] != '\0') {
            if(E && buff[i] == '\n')
                printf("$\n");
            if(T && buff[i] == '\t')
                printf("^I");
            else
                printf("%c", buff[i]);
            i++;
        }
    }

    fclose(fp);
    return 0;
}
