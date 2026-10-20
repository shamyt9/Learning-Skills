#include<stdio.h>
struct stddtl
 {
    char sname[30],scourse[50],sfather[30],smother[30],atdn;
    int srn,cnt[15];
};
int main ()
{
    int n;


  printf("enter the number of student to be enrolled : ");
  scanf("%d",&n);
   struct stddtl obj[n];
   for(int i=0;i<n;i++)
    {
     printf("%s",&obj[n].sname);
    }
}
