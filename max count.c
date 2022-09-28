#include<stdio.h>
int main()
{
    int i,j,maxcount;
char marepeatedchar;
char str[100];
int count=0;
printf("enter a string");
scanf("%s",&str);
for (i=0;i<strlen(str);i++)
{
   count=0;
for(j=0;j<strlen(str);j++)
{
if(str[i]==str[j])
{
count++;
}
}
if(maxcount<count)
{
maxcount=count;
maxrepeatedcahr=str[i];
}
}
printf("the char %c has repeated maximum %d times", maxrepeatedchar,maxcount);
return 0;
}
