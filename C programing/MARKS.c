#include<stdio.h>
int main(){
int hindi=98,english=90,science=87,maths=89,sst=85,total_marks=100,total_obtained;
float percentage;
printf(" \t\t\t\t\t\t\ RESULT");
printf("\n-------------------------------------------------------------------------------------------");
printf("\n subject  \t total marks  \t obtained marks ");
printf("\n -----------------------------------------------------------------------------------------");
printf(" \n hindi ");
printf("\t\t   %d   ", total_marks);

printf("\t\t  %d", hindi);

printf(" \n english ");
printf("\t   %d   ", total_marks);
printf("\t\t  %d", english);

printf(" \n science");
printf("\t   %d ", total_marks);
printf("\t\t\t  %d", science);

printf(" \n maths ");
printf("\t\t   %d   ", total_marks);
printf("\t\t  %d", maths);

printf(" \n sst ");
printf("\t\t   %d   ", total_marks);

printf("\t\t  %d", sst);

total_obtained=hindi+english+science+maths+sst;
percentage=total_obtained*100/500;

printf("\n -------------------------------------------------------------------------------------------");
printf("\n \t\t\t\t\t %d" ,total_obtained );

printf("\n -------------------------------------------------------------------------------------------");

printf(" \n Your Total percentage obtained  : %0.2f" , percentage);









}
