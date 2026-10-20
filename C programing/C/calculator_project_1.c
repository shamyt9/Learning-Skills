#include<stdio.h>
//function declaration
void addition(float a,float b);
void subtraction(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
//main function
int main()
{
    int choice;
    printf("ENTER YOUR CHOICE\n");
    printf("1. Arithematic Operation\n");
    printf("2. Percentage\n");
    printf("3. Power\n");
    printf("4. Exit\n");
    scanf("%d",&choice);
}
void addition(float a,float b)
{
    float res=a+b;
    printf("Addition: %f",res);
}
void subtraction(float a, float b)
{
    float res=a-b;
    printf("Subtraction: %f",res);
}

void multiply(float a, float b){
    float res=a*b;
    printf("Product: %f",res);
}
void divide(float a, float b)
{
  int res;
  if(b!=0)
  {
      res=a/b;
       printf("Quotient: %f",res);
  }
  else{
    printf("Divisor can't be 0");
  }
}
