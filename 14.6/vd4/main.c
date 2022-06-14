#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count, min, max;
	printf ("so min :");
	scanf ("%d",& min);
	printf ("so max :");
	scanf ("%d",&max);
	
	for (count = min ; count <= max; count++) {
	if (count %2 ==0 ){
		printf ("%d \n",count);
	
}	
	}	

	return 0;
}
