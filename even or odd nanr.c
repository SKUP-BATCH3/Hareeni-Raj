#include<stdio.h>
void evenodd();
int main()
{
evenodd();
}
void evenodd()
{
int a,evenodd,res;
printf("enter the element");
scanf("%d",&a);
if (a%2==0)
{
printf("even");
}
else
{
printf("odd");
res=a*a;
printf("%d",res);
}}
