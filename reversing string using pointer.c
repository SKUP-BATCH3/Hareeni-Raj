#include<stdio.h>
int main()
{
char str[6],*p;
p=&str;
printf("enter the string");
scanf("%s",&str);
printf("%s",strrev(str));
}

