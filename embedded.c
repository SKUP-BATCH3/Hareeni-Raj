#include<stdio.h>
struct emp
{

    int id;
    char name[50];
    struct date
    {

        int date;
    }d1;
}e1;
int main()
{

          e1.id=10;
  e1.name[50]="programming";
    e1.d1.date=12;
    printf("%d %s %d",e1.id,e1.name,e1.d1.date);
}
