#include<stdio.h>
int(*ptr)(int,int);
void mul(int,int);
void main()
{
int res=0;
int(*ptr)(int,int)=&mul;
res=(*ptr)(3,2);
printf("%d",res);
}
void mul(int a,int b)
{
a=3,b=2;
int res;
res=a*b;
}
