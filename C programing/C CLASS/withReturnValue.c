#include<stdio.h>
float percentage();
int main()
{
float percent=percentage();
printf("\n%f ",percent);
}
float percentage()
{
int marks,totalMarks;
printf("Enter marks: ");
scanf("%d",&marks);
printf("Enter total marks: ");
scanf("%d",&totalMarks);

float percent=(marks*100)/totalMarks;
return percent;
}
