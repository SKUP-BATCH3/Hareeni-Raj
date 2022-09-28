#include<stdio.h>
int main()
{
int n,r,c;
printf("enter the elements");
scanf("%d\n%d",&r,&c);
int a[r][c],b[r][c];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[r][c]==b[r][c])
{
printf("equal");
}
else
{
printf("not equal");
}
}
}}
