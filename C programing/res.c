#include<stdio.h>
 int main(){

    int qty,total,payable,pass=2109;
    char opt,a,b,yn;
    char A[20],B[20],C[20],D[20],E[20];

     printf("\t\t\t WELCOME TO GRAND GOURMENT RESTAURENTS\\t\t");
     printf("\n Choose option");
    printf("\n a. Guest menu");
    printf("\n b. Settings\n");
    printf("Your selection : ");
    scanf("%c", &opt);
    if(opt=='a'){
        printf("\n Hii ! This is Hotel Grand Gourment .");
    }
    if(opt=='b'){
        printf("\n enter the password : ");
        scanf("%d",&pass);
        if(pass==2109){
            printf("\n Login successful");

               printf("\n Enter the code to add the items : ");
               scanf("%d",&a);
               if(a==1){
                printf("\n input the dish");
                scanf("%s",&A);
                printf("\n Are you want to add more items ");
                 if(yn=='y'|| yn=='Y'){
                      printf("\n Enter the code to add the items : ");
                      scanf("%d",&b);
                      if(b==2){
                         printf("\n input the dish");
                         scanf("%s",&B);
                      }
                      else{
                        printf("\n enter the right code ");
                      }

                 }



               }

               else{
                 printf("\n you have entered the wrong code.");
               }
            }
        }
        else{
            printf("\n You have entered wrong password");
        }
    }










