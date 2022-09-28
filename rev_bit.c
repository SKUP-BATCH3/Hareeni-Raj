#include<stdio.h>
void main()
{
    int i=0x23;
    int n1,n2,n3;
    printf("%x\n",i);
    n1=i&0xf0;
    n1=n1>>4;
    //printf("%x\n",n1);
    n2=i&0x0f;
    n2=n2<<4;
    n3=n2|n1;
    printf("%x\n",n3);
}
