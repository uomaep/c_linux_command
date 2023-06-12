#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(int argc, char* argv[])
{
    FILE *fp;
    int line = 0;
    char buffer[SIZE];

    if(argc == 1) {
        while(fgets(buffer, SIZE, stdin) != NULL) {
            buffer[strcspn(buffer, "\n")] = '\0';
            printf("%s\n", buffer);
        }
    }

    else if( argc == 2 && (fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        return 2;
    }
    else if(argc == 3 && (fp = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        return 2;
    }

    if(argc == 2) {
        while(fgets(buffer, SIZE, fp) != NULL) {
            printf("%s", buffer);
        }
    }
    else if(argc == 3 && strcmp(argv[1], "-n") == 0) {
        while(fgets(buffer, SIZE, fp) != NULL) {
            line++;
            printf("%3d %s", line, buffer);
        }
    } 

    return 0;
}
