#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n, d;
    printf("Digite um float\n");
    scanf("%2f", &n);
    d = n * 2.f;
    printf("O dobro e %2f\n", d);
    return 0;
}
