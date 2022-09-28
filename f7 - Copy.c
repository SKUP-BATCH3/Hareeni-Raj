#include<stdio.h>
void main()
{
    char s[20];
    FILE *fp=fopen("file.txt","r");
      fgets(s,20,fp);
    printf("%s\n",s);
    fputs(s,fp);
    printf("%s",s);






}
