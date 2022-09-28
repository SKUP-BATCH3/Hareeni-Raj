#include<stdio.h>
void main(){
int a=1,b=2;
int *p1=&a,*p2=&b;
int p3,*p4;
p3=*p1+*p2;
printf("add=%d\n",p3);
//p4=(*p1)-(*p2);
//printf("sun=%d\n",*p4);
}
