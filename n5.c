//5

#include <stdio.h>

void decimalBinario(int n) {
	printf("decBin(%d)\n",n);
	getch();
	
	if(n==0) {
		printf("Caso base\n");
    return;
	}
	decBin(n/2);
	printf("%d",n%2); getch();
}

int main () {
	int n;
	printf("Numero: ");
	scanf("%d", &n);
	decBin(n);
	return 0;
}
