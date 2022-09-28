#include<stdio.h>
int main()
{
int n;
printf("enter the elements");
scanf("%d",&n);
if(n%3==0 && n%5==0)
{
printf("FIZZBUZZ");
}
else if(n%3==0)
{
printf("FIZZ");
}
else if(n%5==0)
{
printf("BUZZ");
}
else
{
    printf("%d!",n);
}
}
