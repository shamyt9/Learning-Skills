#include<stdio.h>

void myname(int x);
int main();


int main(){
int a;
printf("enter the number : ");
scanf("%d",&a);
myname(a);


}

void myname(int x){
    if (x==0)
    return;
     printf("\n my name is sham ");

     myname(x-1);

return;
}
