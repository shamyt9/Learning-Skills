#include<stdio.h>

int main(){

float height;
printf("\n enter your height  : ");
scanf("%f",&height);
fflush(stdin);
  char ch[20],course[20];
  puts("\n enter the name  ; ");
  gets(ch);
  puts("\n enter the course : ");
  gets(course);
int age , rn;
printf("\n enter the age :  ");
scanf("%d",&age);
printf("\n enter the roll number  : ");
scanf("%d", &rn);

printf("\n you name is :%s", ch);
printf("\n you roll number  is :%d", rn);
printf("\n you course is :%s", course);
printf("\n you height is :%f", height);
printf("\n you age is :%d", age);

return 0;



}