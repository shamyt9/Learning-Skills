#include<stdio.h>
#include<ctype.h>
int main()
{
    char name[20]="sham";
    char name2[20]="MANISH";
    //converting to Upper
   for(int i=0;name[i]!='\0';i++)
   {
       name[i]=toupper(name[i]);

   }
//converting to lower case
for(int i=0;name2[i]!='\0';i++)
{
    name2[i]=tolower(name2[i]);
}
    printf("%s",name2);
}
