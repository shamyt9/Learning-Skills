#include<stdio.h>

int main();
int main(){
int a;
printf("enter the number upto which you want to print even odd number");
scanf("%d",&a);
printf(" even\t\t\t\todd");

for(int i=1; i>=a; i=i+1){
if(i%2==0){
    printf("%d",i);

}
else if(i%2!=0){
    printf("%d\t\t", i);
}
else{
    printf("\n invalid");
}

}



}