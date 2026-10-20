#include<stdio.h>
int main(){
    char str[]="name";
    char str1[]="contact";
    char str2[]="address";
    char str3[]="marks";
    FILE *file;
    file=fopen("student.xls","w+");
    fprintf(file,str);
    fprintf(file,"\t");
     fprintf(file,str1);
    fprintf(file,"\t");
     fprintf(file,str2);
    fprintf(file,"\t");
     fprintf(file,str3);
    fprintf(file,"\t");

}
