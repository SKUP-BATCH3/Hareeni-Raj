#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp;
  char c;

  //clrscr();
  fp=fopen("file.txt","r");
  while((c=fgetc(fp))!=EOF)
 {
     printf("%c",c);
}
fclose(fp);
getch();
}
