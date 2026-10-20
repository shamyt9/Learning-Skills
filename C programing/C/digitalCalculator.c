#include<stdio.h>
#include<math.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

void showMenu(); //declaration
float add(float,float);
float subtract(float,float);
float multiply(float,float);
float divide(float,float);
float percentage(float,float);
float square(float);
float squareRoot(float);

//-----------------------------------------------------------------------
int main()
{
    int option;
    float num1,num2,result;

    while(1)
    {
        showMenu();
        printf(YELLOW"\nENTER YOUR CHOICE: "RESET);
        scanf("%d",&option);

        if(option==0)
        {
            printf(RED"\n================================\n");
            printf(" EXITED\n");
            printf("\n================================\n"RESET);
            break;
        }

        if(option>=1  && option <=5)
        {
              printf(CYAN"\nENTER TWO NUMBER: "RESET);
              scanf("%f %f",&num1,&num2);
        }
        else if(option==6 || option==7)
        {
              printf(CYAN"\nENTER ANY NUMBER: "RESET);
              scanf("%f",&num1);
        }

        printf(BLUE"\n------------------------------------------------------------\n"RESET);

        switch(option)
        {
        case 1:
            result=add(num1,num2);
            printf(GREEN"RESULT %f\n"RESET,result);
            break;
        case 2:
            result=subtract(num1,num2);
            printf(GREEN"RESULT %f\n"RESET,result);
            break;
        case 3:
            result=multiply(num1,num2);
            printf(GREEN"RESULT %f\n"RESET,result);
            break;
        case 4:
            if(num2 !=0)
            {
                 result=divide(num1,num2);
            printf(GREEN"RESULT %f\n"RESET,result);
            }
            else{
                printf(RED"Divide by 0 error\n"RESET);
            }
            break;

        case 5:
            result=percentage(num1,num2);
            printf(GREEN"%f% of %f is : %f"RESET,num1,num2,result); // 20% of 400 is : 80
            break;
        case 6:
            result=square(num1);
            printf(GREEN"Result is: %f"RESET,result);
            break;
         case 7:
             if(num1>=0)
             {
                result=squareRoot(num1);
                printf(GREEN"Result is: %f"RESET,result);

             }
             else{
                 printf(RED"Negative input for aquare root\n"RESET);
             }
             break;
         default:
             printf(RED"Please choose valid option!! t\n"RESET);
    }
    printf(BLUE"--------------------------------------------------\n"RESET);
    printf(BLUE"--------------------------------------------------\n"RESET);
    }

return 0;
}
//------------------------------------------------------------------------
void showMenu()
{
    printf(MAGENTA"\n============================");
    printf("\n   DIGITAL CALCULATOR  ");
    printf("\n============================"RESET);
    printf(YELLOW"\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Percentage");
    printf("\n6.Square");
    printf("\n7.Square Root");
    printf("\n0.Exit\n"RESET);
    printf(MAGENTA"\n============================"RESET);
}

float add(float a,float b)
{
    return a + b;
}
float subtract(float a,float b)
{
    return a - b;
}

float multiply(float a,float b)
{
    return a * b;
}

float divide(float a,float b)
{
    return a / b;
}

float percentage(float a,float b)
{
    return (a/100)*b;
}

float square(float a)
{
    return a * a; // 4--> 4*4 =16
}

float squareRoot(float a)
{
    return sqrt(a);
}


