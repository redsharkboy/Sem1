#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display(int age1, int age2)
{
	printf("%d\n",age1);
	printf("%d\n",age2);
	
}

int main() 
{
int ageArray[]={2,8,4,12};

display(ageArray[1],ageArray[2]);



	return 0;
}
