#include <stdio.h>
#include <string.h>

#define SIZE 100
void reverse(char* str) {
    int start = 0;
    int end = strlen(str) - 1;
    while(start < end) {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
}

int main(int argc, char* argv[]) {
    char str[SIZE];
    if(argc == 1) {
        while(fgets(str, sizeof(str), stdin) != NULL) {
            str[strcspn(str, "\n")] = '\0';
            reverse(str);
            printf("%s\n", str);
        }
    }
    else if(argc > 1) {
        FILE *fp;
        fp = fopen(argv[1], "r");
        if(fp == NULL) {
            printf("파일 열기 실패\n");
            return 1;
        }

        while(fgets(str, sizeof(str), fp) != NULL) {
            str[strcspn(str, "\n")] = '\0';
            reverse(str);
            printf("%s\n", str);
        }
    }

    return 0;
}
