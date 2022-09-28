#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp;
  char c[255];
  fp=fopen("file.txt","r");
  while((c=fgets(fp))!=EOF)
 {
   printf("%s",c);
 }
rewind(fp);
 while((c=fgets(fp))!=EOF)
{
        printf("%s",c);
}
fclose(fp);
}

