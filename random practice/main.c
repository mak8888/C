#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int a = 0``;
    do
    {
        printf("this is the count %d\n",a);
        a++;
    }
    while(a<100);
    return 0; */
    int a;
    printf("enter the nos:\n");
    scanf("%d",&a);
    switch(a)
    {
    case 0:
        printf("1");
        break;
    case 1:
        printf("2");
        break;
    case 2:
        printf("3");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    case 5:
        printf("5");
        break;
    default:
        printf("default");
        break;

    }
    return 0;
}
