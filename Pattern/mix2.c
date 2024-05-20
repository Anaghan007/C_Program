#include <stdio.h> 
int main() 
{ 
	int n=1;
	char k='A';

	for (int i = 1; i <=5; i++) 
	{ 
	    for (int j = 1; j <=5; j++) 
	    { 
		 if(i<=3)
		 {
		     printf("%c  ",k);
		     k++;
		 }
		 else
		 {
		     printf("%d  ",n);
		     n++;
		 }
	    }
	    printf("\n");
	}
	return 0; 
}