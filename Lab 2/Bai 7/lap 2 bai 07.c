#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, pi= 3.14;
	float C;
	float S;
	float canhA, canhB, P, Svuong, Pchunhat, Schunhat;
	printf ("Ban kinh r: ");
	scanf ("%f",&r);
	C = (2*pi) * r;
	printf ("Chu vi hinh tron là :%.2f \n", C);
	
    S = pi * r * r;
    printf ("Dien tich hinh tron la :%.2f \n", S);
	
	printf ("Canh A:",canhA);
	scanf ("%f",&canhA);
	printf ("Canh B:",canhB);
	scanf("%f",&canhB);
	
	P = 4 * canhA;
	printf ("Chu vi hinh vuong la :%.1f \n",P);
	
	Svuong = canhA * 2;
	printf ("Dien tich hinh vuong la: %.1f \n",Svuong);
	
	Pchunhat = 2 * (canhA + canhB);
	printf ("Chu vi hinh chu nhat la :%.1f \n",Pchunhat);
	
	Schunhat = canhA * canhB;
	printf ("Dien tich hinh chu nhat la : %.1f",Schunhat);
	return 0;
}
