#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    int opt;
    int s = 0;
    while((opt = getopt(argc, argv, "s")) != -1) {
        switch(opt) {
            case 's':
                s = 1;
                break;
            default:
                printf("잘못된 옵션\n");
                return 1;
        }
    }
    
    if(optind == 1) { //옵션이 없을 시
        if(link(argv[optind], argv[optind + 1]) == -1) {
            return 1;
        }
    } else {
        if(s && symlink(argv[optind], argv[optind + 1]) == -1) {
            return 1;
        }
    }
    
    return 0;
}
