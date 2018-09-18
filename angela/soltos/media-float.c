#include <stdio.h>

int main()
{
  float a,b,media;
  printf("digite a nota 1\n");
  scanf("%f", &a);
  printf("digite a nota 2\n");
  scanf("%f", &b);
  media = (a+b)/2;
  if(media >= 6.0f)
  {
	  printf("aprovado com media %.2f\n", media);
  }
  else
  {
	  printf("reprovado com media %.2f\nEstude mais", media);
  }
  return 0;
}
