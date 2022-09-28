
#include<stdio.h>
void main(){
int ecu[5][5]={{1,2,3,4,5},{12,16,16,16,20},{2,10,20,5,40},{10,20,10,20,30},{12,22,12,25,32}};
int i,j;
int op;
printf("Enter the value\n");
scanf("%d",&op);
for(i=0;i<5;i++)
{
    for(j=op;j<5-1;j++)
    {

        printf("ecu[%d][%d]=%d\n",i,j,ecu[i][j]);
    }
}
int n;
scanf("%d",&n);
for(j=0;j<5;j++)
{
    if(ecu[4][j]<=n)
        printf("ecu[%d][%d]=%d",i,j,ecu[i][j]);
}
}
