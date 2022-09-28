#include<stdio.h>
void main()
{
int i,j,a[2][3],mul;
for(int i=0;i<=1;i++)
{
    for(int j=0;j<=3;j++){

        printf("enter the elements");
        scanf("%d",&a[i][j]);

    mul=mul*a[i][j];
}
}
    printf("%d",mul);
}
