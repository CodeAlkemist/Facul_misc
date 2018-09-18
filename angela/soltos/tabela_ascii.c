#include<stdio.h>
int main()
{
    unsigned int i;
    for (i=0 ; i<=255 ; i++)
        printf("%#02X -> %c\n", i, (char)i);
    return 0;
}