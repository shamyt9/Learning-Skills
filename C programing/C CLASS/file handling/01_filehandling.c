#include<stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("data.txt","w");
  char name[50];
  char course[50];
  int age;

  printf("Enter your name: ");
  gets(name);

  printf("Enter your course: ");
  gets(course);

  printf("Enter your age: ");
  scanf("%d",&age);

fprintf(fp,"1)Name: %s\n",name);
fprintf(fp,"2)Course: %s\n",course);
fprintf(fp,"3)Age: %d\n",age);
fprintf(fp,"==============================");

  printf("File  found");
  fclose(fp);
}
