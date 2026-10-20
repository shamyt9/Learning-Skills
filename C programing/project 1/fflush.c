#include<stdio.h>
int main(){
    int rn,age;
    float height;
    char name[20],course[20];
    printf("enter the roll number");
    scanf("%d",&rn);
    fflush(stdin);//for white space
    puts("enter the name  :");
    gets(name);
    printf("enter the age ");
    scanf("%d",&age);
    fflush(stdin);
    puts("enter the course");
    gets(course);
    printf("enter the height");
    scanf("%f",&height);
    printf("\n student name is : %s",name);
    printf("\n student roll number is : %d",rn);
    printf("\n student course is : %s",course);
    printf("\n student age is : %d",age);
   
}