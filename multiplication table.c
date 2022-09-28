#include<stdio.h>
int main()
{
int i,num;
printf("enter numbers to print table");
scanf("%d",&num);
for(int i=1;i<=10;i++)
{
int tab = i*num;
       printf("%d X %d =%d\n",i,num,tab);
}
}
