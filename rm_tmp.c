#include <stdio.h>
#include <stdlib.h>

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
}
