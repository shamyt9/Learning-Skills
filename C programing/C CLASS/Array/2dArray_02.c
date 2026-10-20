#include<stdio.h>
int main()
{
  int arr[3][2]={
    {12,23},
    {45,56},
    {123,900}
  };

  printf("%d\n",arr[1][1]);

  int arr2[3][4]={
    {12,23,34,456},
    {56,67,78,89},
    {56,98,76,65}
  };
    printf("%d",arr2[2][3]);
    printf("\nUsing For LOOP dISPLAYING vALUE OF array: \n");

    for(int i=0;i<3;i++)
    {
      for(int j=0;j<4;j++)
      {
        printf("%d  ",arr2[i][j]);
      }
      printf("\n");
    }
}
