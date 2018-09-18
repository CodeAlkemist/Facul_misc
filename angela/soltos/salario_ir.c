#include <stdio.h>
#include <math.h>

int main(void)
{
    float horas, salario;
    const float desconto = .25f, valor_hora = 19.5f;
    printf("Digite as horas trabalhadas: \n");
    scanf("%f", &horas);
    salario = horas * valor_hora;
    if(salario > 2500.0f)
        printf("O desconto do IR e %.2f\n", (salario * desconto));
    else
        printf("Nao ha desconto de IR\n");
    return 0;
}
