#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[20];
    char *p;
    int i,count=0;
    printf("Enter the string :");
    gets(p);
    for(i=0;*(p+i);i++)
    {
        count++;
    }
    printf("%d",count);
}
