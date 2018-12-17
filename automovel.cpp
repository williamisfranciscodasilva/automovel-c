#include <conio.h>
#include <stdio.h>
main()
{
	float car_fab, tax_ven, tax_imp, car_tot;
	
	printf("Digite o valor de fabrica do carro: ");
	scanf("%f",&car_fab);
	
	tax_ven = (car_fab / 100) * 25;
	tax_imp = (car_fab / 100) * 45;
	car_tot = car_fab + tax_ven + tax_imp;
	
	printf("Valor total do carro: = %f",car_tot);
	printf("\nTaxa vendedor: = %f",tax_ven);
	printf("\nTaxa imposto: = %f",tax_imp);
	getch();
}
