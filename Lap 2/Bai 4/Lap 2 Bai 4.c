#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C;
	float F;
	printf (" Nhap do C :");
	scanf ("%f",&C );
	F = C * 1.8 + 32 ;
	printf("Do F tuong ung la : %.1f do F",F);
	return 0;
}
