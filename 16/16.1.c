#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0x04030201;
    
    char *p = (char *) &x;
    if (p[0] == 1)
        printf("little-endian");
    else if (p[0] == 4)
        printf("big-endian");
    return 0;
}
