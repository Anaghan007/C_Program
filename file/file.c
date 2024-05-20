#include<stdio.h>
int main()
{
    FILE * data;
    char name[100];
    data=fopen("file.txt","a");
    gets(name);
    fprintf(data,"%s",name);

    // data=fopen("file.txt","r");
    // while(fscanf(data,"%s",name)!=EOF)
    // {
    //     printf("%s",name);
    // }
}