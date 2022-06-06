#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan, ly, hoa, tongdiem, dtb; 
	printf ("Diem toan :");
	scanf("%f", &toan);
	
	printf ("Diem ly :");
	scanf("%f", &ly);
	
	printf ("Diem hoa :");
	scanf("%f", &hoa);
	
	tongdiem = toan + ly + hoa;
	printf ("Tong Diem la : %.f\n",tongdiem);
	
	dtb = tongdiem / 3;
	printf ("Diem Trung binh 3 mon la :%.f",dtb);
	return 0;
}
