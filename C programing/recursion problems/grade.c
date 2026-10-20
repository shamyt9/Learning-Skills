#include<stdio.h>
int main();
int main() {

    int marks;
    printf("\n\t\t\t\t RESULT \n ");
    printf("\n Enter the marks : " );
    scanf("%d",&marks);

    if(marks>=85 && marks<=100)
    {
        printf("\n\t\t\t YOU GOT 'A+' \n");



    }
    else if(marks>=75 && marks<85)
    {
         printf("\n\t\t\t YOU GOT 'A' \n");

    }
    else if(marks>=65 && marks<75){
        printf("\n\t\t\t YOU GOT 'B' \n");

    }
     else if(marks>=45 && marks<65){
        printf("\n\t\t\t YOU GOT 'c' \n");

    }
     else if(marks>=33 && marks<45){
        printf("\n\t\t\t YOU GOT 'D' \n");

    }
     else if(marks>=0 && marks<33){
        printf("\n\t\t\t YOU GOT 'fail' \n");

    }

    else
    {

        printf("\n\t\t invalid");

    }
    return 0;



}
