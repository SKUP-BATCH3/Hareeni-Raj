#include<stdio.h>
int main()
{
int n,e,even=0,odd=0;
printf("enter number of elements");
scanf("%d",&n);
int a[n],b[n];
printf("enter %d elements for 1st array",n);
for(int i=0;i<n;i++)
{
scanf("%d",&e);
a[i]=e;
}
for(int i=0;i<n;i++)
{
if(a[i]%2==0)
even=even+a[i];
else
odd=odd+a[i];
}
printf("%d",even);
printf("%d",odd);
}
