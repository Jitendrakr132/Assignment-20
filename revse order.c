#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20];
    int *p,i,j,temp=0;
    p=a;
    printf("Enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {

            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }

        }
    for(i=0;i<5;i++)
        printf("%d ",*(p+i));

}
