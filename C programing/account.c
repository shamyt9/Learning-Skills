#include<stdio.h>
int main();
int main(){


    float am,tax;
    char name[20];
    char account[20];

    puts("enter the name : ");
    gets(name);
    fflush(stdin);
      printf("\n enter the account number: ");
      scanf("%s", &account);




    printf("\n Enter the amount : ");
    scanf("%f",&am);

    if(am>=0 && am<=100000){
        printf("\n\n\t\t 0 per. tax levied");
    }
    else if(am>100000 && am<500000){
        printf("\n 5 per. tax ");
        tax= .05*am;

    }
    else if(am>=500000 && am<1000000){
        printf("\n 10 per. tax levied");
        tax= .10*am;

    }
    else if(am>=1000000 && am<=2000000){
         printf("\n 15 per. tax levied");
        tax=15*am/100;

    }
    else if(am>2000000){
        printf("\n 20 per. tax levied");
        tax=20*am/100;

    }
    else{
        printf("\n your account is in liability");
    }

       printf("\n \t\t Your name is %s", name);

       printf("\n \t\t your account number is : %s ", account);
       printf("\n\n\t\t tax levied %f",tax);

     printf("\n\n\n     \n");

    return 0;



}
