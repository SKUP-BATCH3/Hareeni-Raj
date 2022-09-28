#include<stdio.h>
/*#define red 1
#define blue 2
#define orange 3
   */ enum var{
    monday ='A',
    tuesday,
    wednesday,
    thruday,
    friday,
    saturday=70,
    sunday,
    max_enum,
    }v2;
    int main()
{
     //  printf("%d\n",monday);//var v[3];

    for( enum var v2=monday;v2<max_enum;v2++)
        printf("%d \n",v2);

}
