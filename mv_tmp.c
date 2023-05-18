#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    FILE *inFp, *outFp;
    char buffer[1024];
    int nread;

    if(argc != 3) {
        fprintf(stderr, "mv [파일] [위치]\n");
        exit(1);
    }

    inFp = fopen(argv[1], "r");
    if(inFp == NULL) {
        fprintf(stderr, "%s not found\n", argv[1]);
        exit(1);
    }

    outFp = fopen(argv[2], "wb");
    if(outFp == NULL) {
        fprintf(stderr, "fopen() failed\n");
        exit(1);
    }

    while((nread = fread(buffer, 1, 1, inFp)) > 0) {
        if(fwrite(buffer, nread, 1, outFp) < nread) {
            fclose(inFp);
            fclose(outFp);
        }
    }

    fclose(inFp);
    fclose(outFp);

    if(unlink(argv[1]) != 0) {
        fprintf(stderr, "delete fail.\n");
        exit(1);
    }

    return 0;
}
