#include<stdio.h>
void main()
{
    int a,c;
    printf("enter the size of array");
    scanf("%d",a);
   int b[a];
    for (int i=0;i<a;i++)
    {
        printf("enter the values of array");
        scanf("%d",&b[i]);
    }
    for (int j=a;j>0;j--)
    {
        printf("the reverse numbers of array is");
        printf("%d", b[j]);
    }
}
