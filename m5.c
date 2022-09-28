#include<stdio.h>
int main()
{
    int a[5]={1,2,4,5,6};
    int b[5]={9,3,5,7,9};
    int c[5],i,j;

    c[5]=a[5]+b[5];
    for(j=0;j<5;j++)
        printf("%d",c[j]);


}
