#include<stdio.h>
void main()
{
    FILE *fptr;
    int id;
    char name[20];
    float salary;
    fptr=fopen("emp.txt","r+");
    if(fptr==NULL)
    {
        printf("file doesnot exists\n");
        return;
    }
    printf("enter the id\n");
    scanf("%d",&id);
    fprintf(fptr,"id=%d\n",id);
    printf("enter the name\n");
    scanf("%s",name);
    fprintf(fptr,"name=%s\n",name);
    printf("enter the salary\n");
    scanf("%f",&salary);
    fprintf(fptr,"salary=%.2f\n",salary);
    fclose(fptr);
}
