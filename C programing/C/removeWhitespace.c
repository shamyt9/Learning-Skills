#include<stdio.h>
int main()
{
    char str[100]="hello!! this is a well defined structure.";
    int i=0;
    while(str[i] !='\0')
    {
        i++;
    }
    for(int j=0;str[j]!='\0';j++)
    {
        if(str[j]==' ')
        {
            for(int k=j;str[k]!='\0';k++)
            {
                str[k]=str[k+1];
            }

        }
    }
    printf("%s",str);
}
