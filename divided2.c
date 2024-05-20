#include<stdio.h>
int main()
{
	int a;
	printf("Enter A number :");
	scanf("%d",&a);
	if((a % 5 == 0) && (a % 3 == 0))
	{
		printf("A is Divided by 5 and 3");
	}
	else
	{
		printf("A is Not Divided by 5 and 3");
	}
	
	return 0;
}