#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    int *p;
    printf("Enter value of n: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=p[i];
    }
    printf("Sum of given numbers is %d",sum);
    free(p);
    return 0;
}

