#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("/*======== Kich thuoc cua cac kieu du lieu ========*/ \n");
	int a = 15;
	printf ("        Kieu int : %d Byte \n",sizeof (a));
	printf ("        So nguyen : %d \n",a);
	printf("\n");
	float b = 3.456;
	printf ("        Kieu float : %d Byte \n",sizeof (b));
	printf ("        So thuc kieu float : %f \n",b);
	printf("\n");
	double c = 3.4567891235;
	printf ("        Kieu double : %d Byte \n",sizeof (c));
	printf ("        So thuc kieu double : %.10f \n",c);
	printf("\n");
	char E;
	printf ("        Kieu char : %d Byte \n",sizeof (E));
	printf ("        Ky tu : E \n");
	printf("\n");
	long int d;
	printf ("        Kieu long int : %d Byte \n",sizeof (d));
	printf("\n");
	long double f;
	printf ("        Kieu long double : %d Byte \n",sizeof (f));
	printf("\n");
	printf ("/*================================================*/ \n");
	printf("\n");
	printf ("Bam mot phim bat ky de dong chuong trinh!");
	return 0;
}
