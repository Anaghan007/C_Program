#include <stdio.h> 
int main() 
{ 
	int n = 11; 

	for (int i = 1; i <=5; i++) 
	{ 
	    for (int j = 1; j <=5; j++) 
	    { 
			printf("%d ", n); 
			n++;
		} 
		printf("\n"); 
		n=n+5;
	} 
	return 0; 
}