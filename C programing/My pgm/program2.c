//uses of sring features

#include<stdio.h>
#include<string.h>
int main ()
{
    //1.use of strlen to find  the length of text available or characters present
    char name[] = "Shamshad ali";
    int length=strlen(name);
    printf("%d",length);

    //2.use of strcopy is to replace value

    char msg[]="Hello my name is sham ";
    char msg2[]="My name is shamshad ";
    strcpy(msg,msg2);
    printf("\n %s",msg);

    //3.strcat string function is used to concatinate

    char nm1[]="Shamshad";
    char nm2[]="Ali";
    strcat(nm1, nm2);
    printf("\n %s",nm1);

    //4.reversing the name

    char myname[]="Sahil khan";
    strrev(myname);
    printf("\n\n %s",myname);

}
