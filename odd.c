#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("%d\t",i);
    }
    return 0;
}