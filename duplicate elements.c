#include<stdio.h>
int main()
{
int i,a[]={6,5,4,7,7,5},count;
int size=sizeof(a)/sizeof(a[0]);
printf("duplicate elements");
for (int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
               printf("%d",a[j],count);
            }

        }}}
