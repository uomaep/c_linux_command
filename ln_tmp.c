#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    if(argc == 3) {
        if(link(argv[1], argv[2]) == -1) {
            exit(1);
        }
    }
    else if(argc == 4 && strcmp(argv[1], "-s") == 0) {
        if(symlink(argv[2], argv[3]) == -1) {
            exit(1);
        } 
    }
    
    exit(0);
}
