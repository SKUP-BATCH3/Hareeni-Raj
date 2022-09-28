#include<stdio.h>
void main()
{
int a[]={1,2,3,4};
int b[]={5,6,7,8,9};
int i,j,size1,size2,size3,temp;
size1=sizeof(a)/sizeof(a[0]);
size2=sizeof(b)/sizeof(b[0]);
size3=size1+size2;
int c[size3];
/***************************************************/

printf("printing 1st Array\n");
for(i=0;i<size1;i++)
    printf("%d ",a[i]);


printf("\nprinting 2nd Array\n");
for(i=0;i<size2;i++)
    printf("%d ",b[i]);


/**********************Merging the array************************************/
for(i=0,j;i<size1;i++,j++)
    c[i]=a[i];

for(i,j=0;j<size2;j++,i++)
    c[i]=b[j];
/************************Printing the merged Array**************************/
printf("\nPrinting the merged Array\n");
for(i=0;i<size3;i++)
    printf("%d ",c[i]);
    printf("\n");

  /**************************Sorting the Array************************************/
for(i=0;i<size3;i++)
    for(j=i+1;j<size3;j++)
    {
        if(c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }

/************************Printing Sorted Array*********************************/
printf("the sorted array is\n");
for(i=0;i<size3;i++)
    printf("%d ",c[i]);
    printf("\n");
}

