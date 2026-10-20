//structure introductory program
#include<stdio.h>
struct student {
    char name[30];
    int rn;
    float percentage;
};

int main()
{
    struct student s1;
    puts("enter the student name ");
    gets(s1.name);
    fflush(stdin);
    printf("\n Enter the roll number: ");
    scanf("%d",&s1.rn);
    printf("\n Enter the percentage : ");
    scanf("%f",&s1.percentage);
    printf("\n your name is %s",s1.name);
    printf("\n your roll number is %d",s1.rn);
    printf("\n your percentage is  is %f",s1.percentage);


}
