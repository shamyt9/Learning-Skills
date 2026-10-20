#include<stdio.h>
int main()
{   int n;
    char name[20];
    char cls[10];
    char roll_no[10];
    char contact[20];
    char per[10];
FILE *file;

file=fopen("detail.xls","a+");
//fprintf(file,"Roll_no.");
//fprintf(file,"\t");
//fprintf(file,"Name ");
//fprintf(file,"\t class");

//fprintf(file,"\t contact");
//fprintf(file,"\t per %");
printf("\n Enter the number of student you want to enter : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{

fflush(stdin);
    puts("\n Enter the name of student ");
    gets(name);

    printf("\n enter the class : ");
    gets(cls);
    printf("\n Enter the roll no.");
    gets(roll_no);
    printf("\n Enter the contact : ");
    gets(contact);
     printf("\n Enter the percentage : ");
    gets(per);
    printf("\n your data has been stored ");

    fprintf(file,"\n");


    fprintf(file,roll_no );
    fprintf(file,"\t");

    fprintf(file,name );
    fprintf(file,"\t");

    fprintf(file,cls );
    fprintf(file,"\t");

    fprintf(file,contact );
    fprintf(file,"\t");

    fprintf(file,per );





}





}
