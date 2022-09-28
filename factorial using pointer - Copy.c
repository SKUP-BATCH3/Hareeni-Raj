#include<stdio.h>
int main()
{
int fact=1,i,ptr;
int a=5;
ptr=&a;
ptr=&i;
for(i=1;i<=5;i++)
fact=fact*i;
printf("%d",fact);
}
