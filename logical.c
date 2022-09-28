#include<stdio.h>
   void main()
   {
   int i,j,k,a,b,c,d,e,f,g,h;
   printf("enter the input numbers:");
   scanf("%d\n%d\n%d",&i,&j,&k);
   a=i&&j;
   b=i||j;
   c=!i;
   d=i&&(j=20);
   e=i||(j=20);
   f=i||(j=20)&&k;
   g=i&&j||j&&k;
   h=i||j&&i||k;
   printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f,g,h);
   }
