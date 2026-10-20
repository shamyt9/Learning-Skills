#include<stdio.h>
#include<string.h>

// union definition
union myDetail{
 char name[50];
 int age;
 char course[100];
 char gender[8];
 float percentage;
};
int main()
{
  union myDetail person1,person2; // declaration
  
 // initialization  
  strcpy(person1.name,"Amit Yadav");
  person1.age=24;
  strcpy(person1.course,"Bachelor of Computer Application");
  strcpy(person1.gender,"male");
  person1.percentage=94.5;

  // accessing 
  printf("Name: %s\n",person1.name);
  printf("Age: %d\n",person1.age);
  printf("Course: %s\n",person1.course);
  printf("Percentage: %0.2f %% \n",person1.percentage); 
  
 

}