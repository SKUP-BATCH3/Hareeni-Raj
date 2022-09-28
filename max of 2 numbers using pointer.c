#include<stdio.h>
int main()
{
int *big,ptr;
int a=5,b=10;
ptr=&a;
ptr=&b;
if(a>b)
{
printf("a is large");
}
else
{
printf("b is large");
}
}
