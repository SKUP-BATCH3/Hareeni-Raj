#include<stdio.h>
int main()
{
time_t t=time(NULL);
printf("%s",ctime(&t));
}
