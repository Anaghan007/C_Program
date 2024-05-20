#include<stdio.h>
int main()
{
    for(int i=65;i<=72;i+=8)
    {
            printf("%c\t",i+7);
    }
    for(int i=65;i<=69;i+=5)
    {
            printf("%c\t",i+4);
    }
    return 0;
}