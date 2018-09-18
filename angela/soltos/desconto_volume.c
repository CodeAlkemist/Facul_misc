#include <stdio.h>

int main(void)
{
    int copias;
    float valor;
    const float valor_sv = 0.25f, valor_cv = 0.20f;
    const int minimo_volume = 100;
    printf("Numero de copias a serem feitas\n");
    scanf("%d", &copias);
    if(copias <= minimo_volume)
    {
        printf("o valor a ser pago e de %.2f\n", (valor_sv * (float)copias));
    }
    else
    {
        printf("o valor a ser pago e de %.2f\n", (valor_cv * (float)copias));
    }
    return 0;
}