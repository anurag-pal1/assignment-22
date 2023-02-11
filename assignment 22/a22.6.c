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
    int max;
    max=p[0];
    for(i=1;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(max<p[j])
            {
                max=p[j];
            }
        }
    }
    printf("Max value among given elements is %d",max);
    free(p);
    return 0;
}
