#include<stdio.h>
int main()
{
    //file opening
    FILE *file=fopen("data.txt","r");
    char lines[100];
    //fscanf(file,"%s",lines);
    fgets(lines,sizeof(lines),file);
    printf("%s",lines);
    //checking the file

   /* if(file==NULL)
    {
       printf("NO FILE EXIST");
       return;
    }
    printf("FILE OPENED SUCCESSFULLY!!");*/

    fclose(file);

}
