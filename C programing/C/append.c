
#include<stdio.h>

int main()
{
    if(rename("dataHandling.txt","chintu.txt")==0)
    {
        printf("file renames");
    }
    else{
        printf("failed to rename");
    }
  /*  FILE *fp=fopen("append.txt","a");
    int age;
    char name[30];

    if(fp != NULL)
    {
        for(int i=1;i<=5;i++)
        {      printf("ENTER YOUR AGE: ");
        scanf("%d",&age);
        while(getchar()!='\n');
        printf("\nEnter you name: ");
        gets(name);

        fprintf(fp,"\nAGE: %d\n",age);
        fprintf(fp,"Name: %s\n",name);
        fputs("\n================================\n",fp);

        }

    }


    fclose(fp);*/
}
