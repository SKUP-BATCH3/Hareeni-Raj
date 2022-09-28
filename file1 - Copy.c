#include<stdio.h>
void main()
{
      FILE *fp;
    char buff[255];
    fp=fopen("filee.txt","r");
    while(fscanf(fp,"%s",buff)!=EOF);
{
    printf("%s",buff);
}
    fclose(fp);
}


