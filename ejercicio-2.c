#include <stdio.h>

/* Elaborado por:
Fernando Jiménez(30485993)
*/

int total3 = 0, total5 = 0;

void invertirNum(int numero){
	int dig, aux;
	aux = numero;
	do{
	dig = aux % 10;
	aux = aux / 10;
	printf("%d", dig);
	}
	while(aux != 0);
	printf("\n");
	}
	
void sum3y5(int numero){
	int dig, aux;
	aux = numero;
	do{
	dig = aux % 10;
	aux = aux / 10;
	if(dig == 3){
		total3++;
		}
	if(dig == 5){
		total5++;
			}
		}
	while(aux != 0);
}

int main(){
	int n, i = 1, num, inv;
	printf("Ingrese cantidad de numeros a ingresar: ");
	scanf("%d", &n);
	do{
		printf("Numero %d: ", i);
		scanf("%d", &num);
		sum3y5(num);
		if((num / 100) >= 1){
			invertirNum(num);
			}
			i++;
	}
	while(i <= n);
	printf("El total de 3 ingresados fue %d, el total de 5 ingresados fue %d.", total3, total5);
	return 0;
}
