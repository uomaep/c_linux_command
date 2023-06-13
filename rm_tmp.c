#include <stdio.h>

int main(int argc, char* argv[]) {
    if(argc == 1) {
        printf("usage: rm file...\n");
        return 1;
    }

    if(remove(argv[1]) == -1) {
        printf("파일 삭제 실패\n");
        return 1;
    }

    return 0;
}
