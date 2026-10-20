#include<stdio.h>
#include<string.h>

int main()
{
   // person details
   char name[50],course[100];
  
   printf("Enter your name: ");
   // using scanf()
   scanf("%s",&name);
   getchar();
   printf("\nYour entered Name is: %s",name);

   // using gets
   printf("\nEnter your course: ");
   gets(course);
   puts(course);

}