#include<stdio.h>
int i=0,max;
void sum(int a[])
{
if(max<a[i])
{
max=a[i];
i++;
sum(a);
}
}
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
max=a[9];
sum(a);
printf("%d",max);
}
