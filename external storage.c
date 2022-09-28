#include<stdio.h>
#include"static storage.c"
extern int x;
int d;
int main()
{
d=fun();
printf("%d",d);
}
