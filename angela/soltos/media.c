#include <stdio.h>

int main()
{
  int a,b,c;
  printf("Digite a nota 1\n");
  scanf("%d", &a);
  printf("digite a nota 2\n");
  scanf("%d", &b);
  c = (a+b)/2;
  printf("sua media e %i\n", c);
  if(c >= 6)
  {
	  printf("Aprovado\n");
  }
  else
  {
	  printf("Reprovado\n");
  }
  return 0;
}
