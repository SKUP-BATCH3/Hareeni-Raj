#include<stdio.h>
void main()
{
int i,rem,a[]={1,2,3,4,5},rev,n;
//printf("enter the number");
//scanf("%d",&a[i]);
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
printf("rev number is %d",rev);
}
