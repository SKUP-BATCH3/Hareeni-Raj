#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp;
  int length;
  fp=fopen("file.txt","r");
  fseek(fp,0,SEEK_END);

  length=ftell(fp);
  fclose(fp);
  printf("size of the file %d bytes",length);
  getch();
}
