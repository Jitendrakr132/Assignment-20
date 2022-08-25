#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter the two number");
    scanf("%d %d",&a,&b);
    if(*p>*q)
        printf("maxmium=%d",*p);
        else
            printf("maxmium =%d",*q);

}
