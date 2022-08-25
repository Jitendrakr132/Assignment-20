#include<stdio.h>
void swaps(char **,char **);
int main()
{
    char *s1[20],*s2[20];
    printf("Enter the first string ");
    gets(s1);
    printf("Enter the second string");
    gets(s2);
    swaps(&s1,&s2);
    return 0;
}
void swaps(char **a,char **b)
{
    char *temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%s %s",a,b);
}
