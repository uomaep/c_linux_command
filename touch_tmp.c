#include <stdio.h>
#include <stdlib.h>
#include <utime.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    FILE *fp;

    if(argc < 2) {
        fprintf(stderr, "파일명을 적으세요\n");
        exit(-1);
    }

    if(access(argv[1], F_OK) != -1) {
        utime(argv[1], NULL);
    }
    else {
        fp = fopen(argv[1], "w+");
        fclose(fp);
    }

    return 0;
}
