#include<stdio.h>

struct book

{
    char book_name[30];
    int price;
    /* data */
};
int main ()
{
    struct book b1,b2,b3,b4;
    puts("enter the book 1");
    gets(b1.book_name);
    printf( "\n enter the price of book 1");
    scanf("%d",&b1.price);
    fflush(stdin);
     puts("enter the book 2");
    gets(b2.book_name);
    printf( "\n enter the price of book 2");
    scanf("%d",&b2.price);
    fflush(stdin);
     puts("enter the book 3 ");
    gets(b3.book_name);
    printf( "\n enter the price of book 3");
    scanf("%d",&b3.price);
    fflush(stdin);
     puts("enter the book 4 : ");
    gets(b4.book_name);
    printf( "\n enter the price of book 4 :");
    scanf("%d",&b4.price);
    printf("\n book name is %s",b1.book_name);
    printf("\n price is %d",b1.price);
     printf("\n book name is %s",b2.book_name);
    printf("\n price is %d",b2.price);
     printf("\n book name is %s",b3.book_name);
    printf("\n price is %d",b3.price);
     printf("\n book name is %s",b4.book_name);
    printf("\n price is %d",b4.price);


}
