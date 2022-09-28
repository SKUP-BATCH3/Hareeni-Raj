
#include<stdio.h>
int main()
{
  int n=0,i=0,l1=0,l2=0,t=0;
  printf("enter the size of array..\n");
  scanf("%d",&n);
  int arr[n];
  printf("enter the element\n");
  for(i=0;i<n;i++)
  {

      scanf("%d\t",arr[i]);

  } printf("the array elements are :\n");
  for(i=0;i<n;i++)
  {

    printf("%d\t",arr[i]);
  }
  printf("\n");
 l1=arr[0];
  l2=arr[1];

  if(l1<l2)
  {
      t=l1;
      l1=l2;
      l2=t;

  }
  for(i=2;i<n;i++)
  {
      if(arr[i]>l1)
      {
          l2=l1;
          l1=arr[i];


      }
      else if(arr[i]>l2 && arr[i] !=l1)
      {
          l2=arr[i];

      }
  }
  printf("the first l1=%d",l1);
  printf("the second l2=%d",l2);

  }




