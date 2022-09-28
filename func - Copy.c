#include<stdio.h>
int add(int n,int m);
int sub(int n,int m);
int div(int n,int m);
int mul(int n, int m);
int main()

{
    int n,m,p,q,r,s;


    printf("enter the n and m \n");
    scanf("%d %d",&n,&m);
   p= add(n,m);//p=30;
   printf("addition %d\n",p);

    q=sub(n,m);
    printf("sub %d\n",q);

    r=div(n,m);
    printf("div %d\n",r);

    s=mul(n,m);
    printf("mul %d\n",s);


}
int add(int n,int m)


{
    return n+m;//return 30
}
int sub(int n,int m)
{
    int b;
    b=n-m;
return b;
}
int div(int n,int m)
{
    int c;
    c=n/m;


    return c;
}

int mul(int n, int m)
{
    int d;
    d=n*m;
    return d;
}



