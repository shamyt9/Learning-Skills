#include<stdio.h>
 int main(){
     printTable(2);
 //printCapital();
 reverceTable(4);

 }

/*void printCapital(){
 int i;


 for(i=65;i<=90;i++){
    printf("%c \n",i);
 }
 }*/

 int printTable(int n){
 int i;
 for(i=1;i<=10;i++){

    printf("%d * %d = %d\n",n,i,n*i);
 }
 }

int reverceTable(int n){
for (int i=10;i>=1;i--){

    printf("%d * %d = %d\n",n,i,n*i);
}
}
