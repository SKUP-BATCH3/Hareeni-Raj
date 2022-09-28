#include<stdio.h>
int main()
{
int a,b;
printf("enter the elements");
scanf("%d\n%d",&a,&b);
if(a%5==0||b%5==0)
{
if(a<b)
return a;
}
else if(a==b)
return 0;
}

