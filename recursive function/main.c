#include <stdio.h>
#include <stdlib.h>
int factorial (int num);
int main()

{
    int a,b;
    printf("enter a no to calculate the factorial\n");
    scanf("%d",&a);
    b= factorial(a);
    printf("the factorial of %d is %d\n",a,b);
    return 0;
}
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else if (num>=1)
    {
        return (num*factorial(num-1));
    }
}
