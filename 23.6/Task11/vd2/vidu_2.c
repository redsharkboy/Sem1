#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calculateSum(float num[]);

int main() 
{
	float result,num[]={23.4,55,22.6,3,40.5,18};
	
	result=calculateSum(num);
	
	printf("Result = %.2f \n", result);

	return 0;
}

float calculateSum(float num[])
{
	float sum=0.0;
	
	for (int i=0;i<6;++i)
	{
		sum+=num[i];
	}
	return (sum);
}
