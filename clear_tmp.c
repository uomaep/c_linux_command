#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    write(1, "\33[H\33[J", 6);
}
