// checking is the given character by usre is present in the word or sentence or not

#include<stdio.h>
int main()
{   int valid=1;
    char ch;
    char arr[100]="My name is khan and I am from uttar pradesh";
    printf("\n Enter the character : ");
    scanf("%c",&ch);

    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==ch){
            valid=0;
            break;
        }

    }
    if(valid==0){
        printf("\n This character is present");
    }
    else{
        printf("\n This character is not present");
    }

}
