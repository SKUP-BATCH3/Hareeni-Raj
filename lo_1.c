 #include<stdio.h>
   void main()
   {
   int a,b,c,d,e,f;
   printf("enter the input numbers:");
   scanf("%d\n%d",&a,&b);
   c=a&&b;
   d=a||b;
   e=!a;
   f=!b;
   printf("%d\n%d\n%d\n%d",c,d,e,f);
   }
