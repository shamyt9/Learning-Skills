#include<stdio.h>

int maoin();

int main(){
 char pass[20] , id[20];

 puts("enter the id  : ");
 gets(id);
 puts("enter the password : ");
 gets(pass);

 if(id=="niit.gkp53@gmail.com" && pass=="12401240")
 {
    printf("login seccess");
 }
 else{
    printf("invalid");
 }
 return 0;

}

