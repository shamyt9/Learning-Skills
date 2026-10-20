#include<stdio.h>
void findCircumference();
int main()
{
 findCircumference();
}

void findCircumference()
{
   float radius;
   printf("Enter the radius: ");
   scanf("%f",&radius);
   float circumference=2*3.14*radius;
   printf("\nCircumference is: %0.2f",circumference);
}


