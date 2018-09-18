#include <stdio.h>

int main(int argc, char const *argv[])
{
    float v, c;
    const float p = 0.10f;
    printf("Digite o total das vendas: ");
    scanf("%f", &v);
    c = v * p;
    printf("a comissao e: %.2f\n", c);
    return 0;
}
