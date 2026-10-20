#include<stdio.h>

int main()
{
    FILE *fp=fopen("dataHandling.txt","w");

    if(fp != NULL)
    {
        int age;
      printf("Enter your age: ");
        scanf("%d",&age);
      fprintf(fp,"AGE IS %d\n",age);
       fprintf(fp,"\nAK THOUGHT\n");
       fputs("\n==========================\n",fp);
       fputs("HELLO THIS IS FPUTS()",fp);
    }

    fclose(fp);
}
