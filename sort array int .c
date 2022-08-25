#include<stdio.h>
#include<stdlib.h>
void sort(int *ptr,int );
int main()
{
 int ptr[20],size,i;
 printf("Enter the array size :");
 scanf("%d",&size);
 printf("Enter the element array:");
 for(i=0;i<size;i++)
 {
        scanf("%d",(ptr+i));
 }
 sort(&ptr,size);
 return 0;
}
void sort(int *s,int size)
{
 int i,j;
 int temp;
 for(i=0;i<size;i++)
 {
     for(j=i+1;j<size;j++)
     {
         if(*(s+i)>*(s+j))
         {
             temp=*(s+i);
             *(s+i)=*(s+j);
             *(s+j)=temp;
         }
     }
 }
 for(i=0;i<size;i++)
 {
     printf("%d ",*(s+i));
 }

}

