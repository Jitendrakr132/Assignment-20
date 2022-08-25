#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],i,sum=0;
    int *p;
    printf("Enter the array element:");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++)
    {
        sum+=*(p+i);
    }
    printf("sum is =%d",sum);
}
