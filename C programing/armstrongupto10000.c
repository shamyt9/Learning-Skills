#include<stdio.h>
#include<math.h>
// armstrong number is a number ,the cube of the digits of which is equal as the original number.
int main(){
    int sum,i,rem,temp,n,p,count;

    printf("\n\t\t\t------------------------------------------------------------");
    printf("\n\t\t\t\t ALL ARMSTRONG NUMBER FROM 1 TO 100000 ");
    printf("\n\t\t\t------------------------------------------------------------");

    for(i=1; i<=1000; i=i+1){
         sum=0;
        temp=i;
        sum=0;
        temp=i;
        while(temp>0){


        rem=temp%10;
        sum=sum+ rem*rem*rem;
        temp=temp/10;
        }
        if(i==sum){
            printf("\n armstrong number is %d", i);
        }





    }
}
