//6

#include <stdio.h>

int main() {
  long int a,b,c;
  int n,i;
  double r;

  printf("Digite um valor: ");
  scanf("%d", &n);

  if (n <= 1) {
	printf("Numero invalido.");
  }
  else {
    
    a = 1;
    b = 1;
    i = 2;
    printf("\n");

    while(i < n) {
    	c = a + b;
    	r = c;
    	r = r/b;
    	printf("%ld %.3f\n", c, r);
    	a = b;
    	b = c;
      	i++;
    }
  }
  return(0);
}
