#include<stdio.h>
int i=1,n,fib=0,f=1,t;
void fibo(int n)
{
    if(i<=n)
    {
        t=f+fib;
        printf("\t%d",f);
        fib=f;
        f=t;
        i++;
        fibo(n);
    }
}
int main()
{
    printf("enter the elements");
scanf("%d",&n);
printf("\t%d",fib);
fibo(n);
}

