#include<stdio.h>
int main()
{
 // pointers basic with normal variables
  int a=90;
  int b=89;

  int *ptr=&a;
  int *ptr2=&b;
  printf("%d\n", *ptr);
  printf("%d\n", *ptr2);
  printf("%d\n", *ptr + *ptr2);
  printf("%d\n", *ptr - *ptr2);
  printf("%d\n", *ptr * *ptr2);
  printf("%d\n", *ptr / *ptr2);
  printf("%d\n", *ptr % *ptr2);

  // pointer with array
  int arr[4] = {2, 3, 4, 5};
  int *ptr3 = &arr;
  printf("%d\n", *ptr3);
  ptr3++;
  printf("%d\n", *ptr3);
  ptr3++;
  printf("%d\n", *ptr3);
  ptr3++;
  printf("%d\n", *ptr3);

}