#include <stdio.h>
int main()
{

  //RECURSION


}

//RECURSION
int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }

}