#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    FILE *inFp, *outFp;
    char buffer[1024];
    int nread;

    if(argc != 3) {
        printf("mv [파일] [위치]\n");
        return 1;
    }

    inFp = fopen(argv[1], "r"); 
    if(inFp == NULL) {
        printf("%s not found\n", argv[1]);
        return 1;
    }

    outFp = fopen(argv[2], "wb"); //w: 쓰기 모드로 파일을 열린다. 파일이 존재한다면 그 내용을 파괴하고 없으면 새로 만든다.
                                  //b: 이진 모드로 열린다.
    if(outFp == NULL) {
        printf("fopen() failed\n");
        return 1;
    }

    while((nread = fread(buffer, 1, 1, inFp)) > 0) {
        if(fwrite(buffer, nread, 1, outFp) < nread) {
            fclose(inFp);
            fclose(outFp);
        }
    }

    fclose(inFp);
    fclose(outFp);

    if(unlink(argv[1]) != 0) { //파일 옮긴 후 원래 파일은 삭제
        printf("delete fail.\n");
        return 1;
    }

    return 0;
}
