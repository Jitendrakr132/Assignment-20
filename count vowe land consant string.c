#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[20];
    char *p;
    int i,c=0,count=0;
    printf("Enter the string:");
    p=s;
    gets(p);
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
            count++;
            else
                c++;

    }
    printf("vowel is %d\n",count);
    printf("consant is %d",c);
}
