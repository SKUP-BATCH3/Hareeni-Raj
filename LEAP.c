#include<stdio.h>
main()
{
    int y;
    printf("Enter the year to check : ");
    scanf("%d",&y);
    (y%4==0)? printf("is"):printf("not");
}
