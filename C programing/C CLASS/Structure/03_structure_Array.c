#include<stdio.h>
#include<string.h>

// Array of Structure
struct myDetail{
 char name[50];
 int age;
 char course[100];
 char gender[8];
 float percentage;
};
int main()
{
  struct myDetail person[10]; // declaration
  
 // initialization  
  strcpy(person[0].name,"Amit Yadav");
  person[0].age=24;
  strcpy(person[0].course,"Bachelor of Computer Application");
  strcpy(person[0].gender,"male");
  person[0].percentage=94.5;

  strcpy(person[1].name,"Manish Yadav");
  person[1].age=25;
  strcpy(person[1].course,"Master of Computer Application");
  strcpy(person[1].gender,"Male");
  person[1].percentage=90.5;

  // accessing 
  // printf("Name: %s\n",person1.name);
  // printf("Age: %d\n",person1.age);
  // printf("Course: %s\n",person1.course);
  // printf("Percentage: %0.2f %% \n",person1.percentage);  

}