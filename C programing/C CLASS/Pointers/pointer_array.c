
// pointers with arrays
#include <stdio.h>
int main() {

    // pointer with array
    int arr[4] = {2, 3, 4, 5};
    int *p = arr; 
    printf("%d\n", *p); // 2
    p++;
    printf("%d\n", *p);//3
    p++;
    printf("%d\n", *p);//4
    p++;
    printf("%d\n", *p);//5

    return 0;
}


