#include<stdio.h>
void calculateBmi();
int main()
{
calculateBmi(23,variable); //argument

return 0;
}

void calculateBmi(int variables) // parameter
{
   float weight,height;
   printf("Enter your weight in kg:  ");
   scanf("%f",&weight);
    printf("\nEnter your height in metre:  ");
   scanf("%f",&height);
   float bmi=weight/(height*height);
   printf("BMI IS: %0.2f",bmi);

   return 25;
}


