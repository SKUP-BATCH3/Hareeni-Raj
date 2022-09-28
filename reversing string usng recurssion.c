#include<stdio.h>
int rev(int x)
{
int rev=0;
char str[10];
printf("enter the string");
scanf("%s",str);
printf("%s",strrev(str));
}
int main()
{
char a[10];
rev(a);
return 0;
}
