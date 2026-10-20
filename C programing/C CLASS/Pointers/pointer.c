#include<stdio.h>
int main()
{
  
    int arr[4] = {2, 3, 4, 5};

    int *ptr = arr; 
    printf("%d", *ptr);
    ptr++;
    printf("\n%d", *ptr);
    ptr++;
    printf("\n%d", *ptr);
    ptr++;
    printf("\n%d", *ptr);

    return 0;
}