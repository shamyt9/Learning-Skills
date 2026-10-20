#include<stdio.h>
#include<string.h>

struct personalData{
char name[50];
int age;
char course[50];
};
int main()
{
struct personalData obj1,obj2;
strcpy(obj1.name,"Sham");
obj1.age=12;
strcpy(obj1.course,"MCA");

strcpy(obj2.name,"VIVEK");
obj2.age=22;
strcpy(obj2.course,"B.tech");

printf("==========MY DETAILS=================\n");
printf("Name: %s\n",obj1.name);
printf("Age: %d\n",obj1.age);
printf("Course: %s\n",obj1.course);


}
