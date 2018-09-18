#include <stdio.h>
#include <math.h>

int main(void)
{
    float imc, peso, altura;
    printf("Digite sua altura\n");
    scanf("%f", &altura);
    printf("Digite seu peso\n");
    scanf("%f", &peso);
    imc = peso/pow(altura, 2);
    if (imc > 30)
        printf("Voce esta acima do peso, seu imc e %.2f\n", imc);
    else
        printf("Voce esta dentro do peso ideal, seu imc e %.2f\n", imc);
    return 0;
}