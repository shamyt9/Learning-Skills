#include<stdio.h>
int sum(int n);
int fact(int a);
void goodmorning(int y);

int main(){
    int a,w;
    printf("enter the number : ");
    scanf("%d", &a);
    printf("\n your factorial of number is %d : ", fact(a));
    printf("\n sum of number is %d  :" , sum(10) );
    printf("\n enter the number to print your text : ");
    scanf("%d", &w);
    goodmorning(w);
}

int sum(int n){
    if(n==1) 
     return n;
    
int sumf=n+sum(n-1);
 

return sumf;

}

int fact(int a){
    if(a==1)
    return 1;
    int factorial=a*fact(a-1);
    return factorial;
}
void goodmorning(int y){
    if(y==0)
    return;
    printf("\n good morining everyone ");
    goodmorning(y-1);
    return ;

}