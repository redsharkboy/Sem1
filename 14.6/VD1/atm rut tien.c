#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ATM;
	int pin;
	int cardid;
	int luachon;
	
	
	printf ("cardid :");
	scanf ("%d",&cardid);
	
	printf ("Ma pin: ");
	scanf ("%d",&pin);
	
	
	
	if (pin == 456 && cardid == 123)
	{
		printf ("1. Rut tien:\n");
		printf ("2. Chuyen khoan:\n ");
		printf ("3.Xem so du: \n");
		printf ("4. Exit \n");
	printf ("Vui long lua chon :");
	scanf ("%d",&luachon);
	if (luachon == 1 )
	printf ("Ban chon rut tien ");
	else if (luachon == 2)
	printf (" Ban chon chuyen khoan ");
	else if (luachon == 3)
	printf ("Ban xem so du ");
	else if (luachon == 4)
	printf ("Hen gap ban lan sau! ");
	
	}
	else {
	printf ("Moi ban nhap lai.");
	}
	
	return 0;
}
