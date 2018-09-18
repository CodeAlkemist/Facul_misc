#include <stdio.h>

int main(void)
{
    int i;
    printf("Digite a idade\n");
    scanf("%d", &i);
    if(i < 11)
        printf("Infantil");
    else if(i > 10 && i <= 17)
        printf("juvenil");
    else
        printf("senir");
    return 0;
}
