#include <stdio.h>

int sumaDiv(int num){
	int sum = 0, i = 1;
	do{
	if((num % i) == 0){
		sum = sum + i;
		}
		i++;
	}
	while(i < num);
	return (sum);
	}
int n1, n2, suma1, suma2;
int main()
{
	printf("Ingrese numero 1: ");
	scanf("%d", &n1);
	printf("Ingrese numero 2: ");
	scanf("%d", &n2);
	suma1 = sumaDiv(n1);
	suma2 = sumaDiv(n2);
	if(suma1 == n2 && suma2 == n1){
		printf("\n%d y %d son amigos", n1, n2);
		}
		else{
			printf("\n%d y %d no son amigos", n1, n2);
			}
	return 0;
}
