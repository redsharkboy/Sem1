#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top, bottom, height, S; 
	printf ("Top :\n");
	scanf ("%f", &top);
	
	printf ("Bottom : \n");
	scanf ("%f", &bottom);
	
	printf ("Height :\n");
	scanf ("%f", &height);
	
	S = (top + bottom) /2 * height;
	printf ("Dien tich hinh thang la %.1f",S);
	return 0;
}
