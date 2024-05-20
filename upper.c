#include<stdio.h>
int main() 
	{
		char c;
		printf("Enter an alphabet: ");
		scanf("%c", &c);

		if (c<97 && c<122)
		{
			printf("%c",c+32);
		}
		else
		{
			printf("%c",c-32);
		}
		
		return 0;
}