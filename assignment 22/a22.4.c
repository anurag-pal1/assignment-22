#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i;
    char *p;
    printf("Enter length of string: ");
    scanf("%d",&n);
    p=(char *)calloc(n,sizeof(char));
    printf("Enter a string: ");
     scanf("%s",p);
    printf("%s",p);
    return 0;
}

