#include <stdio.h>

int main(int argc, char const *argv[])
{
    float s, r = 100.00f;
    int pr;
    printf("Digite o salario: ");
    scanf("%f", &s);
    printf("Digite o reajuste: ");
    scanf("%d", &pr);
    r = (float)pr / r;
    r = s * r;
    printf("reajuste %.2f\n", r);
    return 0;
}
