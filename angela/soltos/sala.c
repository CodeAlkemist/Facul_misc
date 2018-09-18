#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float comprimento, largura, area;
    printf("Digite o comprimento e a largura\n");
    scanf("%f, %f",&comprimento, &largura);
    area = largura * comprimento;
    printf("Area: %f\n", area);
    return 0;
}
