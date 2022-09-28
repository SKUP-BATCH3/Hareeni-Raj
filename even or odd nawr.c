#include<stdio.h>
int evenodd(),res;
int main()
{
res=evenodd();
printf("%d",res);
}
int evenodd()
{
int a,evenodd,res;
printf("enter the elements");
scanf("%d",&a);
if(a%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return (a%2==0);
}
