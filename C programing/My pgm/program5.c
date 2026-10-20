//call by value example
#include<stdio.h>
void swap(int a,int b);

int main()
{
    int x=5;
    int y=19;
    printf("before swap: = %d, y=%d\n",x,y);
    swap(x,y);
    printf("\n after swap : x= %d , y=%d\n",x,y);
    return 0;


}
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}