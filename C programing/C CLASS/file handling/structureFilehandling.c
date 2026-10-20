#include<stdio.h>

struct employeeDetails
{
   char name[50];
   int age;
   char employeeId[8];
   char gender[8];
   char department[30];
   double salary;
};

int main()
{
  struct employeeDetails employee[10];
  FILE *fp=fopen("data.txt","a");
  for(int i=0;i<3;i++)
  {
     printf("PERSON %d: \n",i+1);
     printf("Enter name: ");
     gets(employee[i].name);

     printf("Enter Employee ID: ");
     gets(employee[i].employeeId);

      printf("Enter gender: ");
     gets(employee[i].gender);

     printf("Enter age: ");
     scanf("%d",&employee[i].age);
     getchar();

      printf("Enter department: ");
     gets(employee[i].department);

     printf("Enter SALARY: ");
     scanf("%lf",&employee[i].salary);
     getchar();

     fprintf(fp,"\n========= Person Number: %d ============\n",i+1);
     fprintf(fp,"Employee Id: %s\n",employee[i].employeeId);
     fprintf(fp,"NAME: %s\n",employee[i].name);
     fprintf(fp,"Age: %d\n",employee[i].age);
     fprintf(fp,"Gender: %s\n",employee[i].gender);
     fprintf(fp,"Department: %s\n",employee[i].department);
     fprintf(fp,"Salary: %0.2f\n",employee[i].salary);

     printf("Data inserted Successfully!\n\n");

  }
}
