#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf ("Dien vao ky tu chu cai (a-z) :\n ");
	scanf("%c",&ch);

	if (ch < 'a' || ch > 'z')
	    printf ("ky tu khong phai trong bang chu cai");
	else
	    switch (ch)
	    {
	    	case 'a' :
	    	case 'e' :
	        case 'i' :
	        case 'o' :
	        case 'u' :
	        	printf ("ky tu la 1 nguyen am \n");
	        	break;
	        case 'z' :
				printf ("ky tu cuoi (z) da them vao \n");
				break;
			default :
				printf (" ky tu la 1 phu am");
				break;
		}
	return 0;
}
