#include <stdio.h> 
int main() 
{ 
	char n = 1; 

	for (int i = 1; i <=5; i++) 
	{ 
	    for (int j = 1; j <=5; j++) 
	    { 
			printf("%d ", n++); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
