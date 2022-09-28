#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("file_handling.c","r");
while((ch=fgetc(fp))!=EOF)
{
    printf("%c",ch);
}
fclose(fp);
}
