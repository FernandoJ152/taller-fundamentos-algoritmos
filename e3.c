#include <stdio.h>

int main(){
	int i = 1, ced, compraMayor = 0, cantCompra, descuento = 1, totalDesc = 0, cantGIF = 0, cant3 = 0, cant5 = 0;
	float totalCompra, porcDesc, n;
	char etiqCompra;
	do{
		printf("Ingrese cantidad de clientes: ");
	scanf("%f", &n);
	if(n < 1){
	printf("Valor invalido\n");
	}
	}
	while(n < 1);
	do{
		printf("\nDATOS DEL CLIENTE %d", i);
		do{
			printf("\nNumero de cedula: ");
			scanf("%d", &ced);
			if(ced > 99999999){
				printf("Cedula invalida");
			}
		}
		while(ced > 99999999);
		printf("Monto total de compras: ");
		scanf("%f", &totalCompra);
		if(totalCompra < 1000 || totalCompra >= 5000){
		descuento = 0;
		}
		if(((ced % 10) % 2) == 0){
			totalCompra = totalCompra * 0.95;
			cant5++;
		}
		else{
			totalCompra = totalCompra * 0.97;
			cant3++;
		}
			printf("Cantidad de compras: ");
			scanf("%d", &cantCompra);
			if(cantCompra < 3){
				descuento = 0;
			}
			do{
				printf("Etiqueta de los productos (1 letra; M: Morado, A: Amarillo): ");
			scanf(" %c", &etiqCompra);
			if(etiqCompra != 'M' && etiqCompra != 'A'){
				printf("Valor invalido\n");
				}
			}
			while(etiqCompra != 'M' && etiqCompra != 'A');
				if(descuento == 1){
					totalCompra = totalCompra * 0.5;
					totalDesc++;
					}
				if(totalCompra >= compraMayor){
			compraMayor = totalCompra;
			cantGIF++;
			}
			i++;
			descuento = 1;
	}
	while(i <= n);
	porcDesc = totalDesc / n * 100;
	printf("\nEl %.2f por ciento de los clientes recibieron el descuento\n%d de los clientes recibieron la GIF\nCantidad de descuentos de 3 por ciento: %d\nCantidad de descuentos de 5 por ciento: %d", porcDesc, cantGIF, cant3, cant5);
	return 0;
}