#include<stdio.h>
int main()
{
  FILE*fp=fopen("data.docs","r");

  if(fp == NULL)
  { 
    printf("File not found");
    return 0;
  }
  printf("File found");
 


}