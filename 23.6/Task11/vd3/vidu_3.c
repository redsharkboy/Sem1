#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void displayNumbers(int num[2][2]);

int main(int argc, char *argv[]) 

{
	int num[2][2];
	printf("Enter 4 numbers: \n");
	
	for (int i =0; i<2;++i)
	{
		for (int j=0;j<2;++j)
		{
			scanf("%d", &num[i][j]);
		}
	}
	return 0;
}

void displayNumbers(int num[2][2])
{
	printf("Displaying: \n");
	
	for(int i=0;i<2;++i)
	{
		for (int j=0;j<2;++j)
		{
			printf("%d \n", num[i][j]);
			
		}
	}	
}
