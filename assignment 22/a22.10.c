#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j;
    int *p;
    printf("Enter value of n: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    int max;
    int min;
    min=p[0];
    max=p[0];
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(max<p[j])
            {
                max=p[j];
            }
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(min>p[j])
            {
                min=p[j];
            }
        }
    }
    printf("Max value among given elements is %d",max);
    printf("\nMin value among given elements is %d",min);
    free(p);
    return 0;
}

