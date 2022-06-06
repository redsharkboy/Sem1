#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1;
	float num2;
printf("Nhap so num1 = ");
scanf("%f", &num1);
printf("Nhap so num2 = ");
scanf("%f", &num2);
printf ("Tong cua so do la : %.f\n", num1 + num2);
printf ("Hieu cua so do la : %.f\n", num1 - num2);
printf("Tich cua so do la: %.f\n", num1*num2);
printf ("Thuong cua so do la : %.3f\n", num1 / num2);

getch();
	
	return 0;
}
