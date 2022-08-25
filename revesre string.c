#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[20],b[20];
    char *p,*p1;
    printf("Enter the string");
        gets(a);
        p=a+strlen(a)-1;
        p1=b;
        while(p>=a)
        {
            *p1=*p;
            p1++;
            p--;
        }
        *p1='\0';
        printf("%s",b);

}

