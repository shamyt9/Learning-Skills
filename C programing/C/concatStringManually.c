#include<stdio.h>
int main()
{
    char name1[20]="Sham";
    char name2[20]="shad";
    int i=0;
    while(name1[i] !='\0')
    {
        i++;
    }
    int j=0;
    while(name2[j] != '\0')
    {
        name1[i]=name2[j];
        j++;
        i++;
    }
name1[i]='\0';
    printf("%s",name1);
}
