#include<stdio.h>
int main();
int main() {

    int st,nd,rd;
    printf("\n\t\t\t\t INTERVIEW \n ");
    printf("\n enter the marks of first round :" );
    scanf("%d",&st);

    if(st>=75 && st<=100)
    {
        printf("\n\t\t\t congrates ! you are selected for second round \n");
        printf("\n Now Enter the marks of second round : ");
        scanf("%d",&nd);

        if(nd>=85 && nd<=100){
            printf("\n\t\t\t Congrates! you are selected for final round.");
            printf("\n Enter the marks of final round  :\n");
            scanf("%d",&rd);
            if(rd>=95 && rd<=100){
                printf("\n\t\t\t CONGRATULATIONS ! You cracked this interview. \n");
            }
            else if(rd<95 && rd>=0){
                printf("\n\n\t\t\t Sorry ! You are rejected to this final round.");
            }
            else{
                printf("\n invalid input.");
            }
        }
        else if (nd<85 && nd>=0){
            printf("\n\t\t\t sorry! you are rejected in second round \n");
            printf("\n\n\n");
        }
        else{
            printf("\t\t\t invalid input \n");
        }

    }
    else if(st<75 && st>=0)
    {
        printf("\n\t\tyou are rejected to first round ");

    }
    else
    {

        printf("\n\t\t invalid input");

    }
    return 0;



}
