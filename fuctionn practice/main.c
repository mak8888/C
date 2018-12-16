#include <stdio.h>
#include <stdlib.h>
int factorial (int num);

int main()
{
int x = 5;
printf("the factorial of %d is %d\n",x,factorial(x));
return 0;
}
int factorial(int num)
{
    if (num == 1)
        return 1;
    else
    return(num*factorial(num-1));
    getch();n
}

