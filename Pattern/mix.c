#include <stdio.h> 
int main() 
{ 
	int n=1;
	char k='A';

	for (int i = 1; i <=5; i++) 
	{ 
	    for (int j = 1; j <=5; j++) 
	    { 
		 if(i%2!=0)
		 {
		     printf("%2c",k);
		    
		 }
		 else
		 {
		     printf("%2d",n);
		     
		 }
		 n++;
		 k++;
	    }
	    printf("\n");
	}
	return 0; 
}