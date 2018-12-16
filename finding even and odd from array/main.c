#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    int array[100];
    printf("enter the no:");
    scanf("%d",&num);
    printf("enter the elements of array\n");
    for(i=0;i<num;i++)
    {
        scanf("%d\n",&array[i]);
    }
    printf("even no: in array are!\n");
    for(i=0;i<num;i++)
    {
        if(array[i] % 2 == 0)
        {
            printf("%d \t",array[i]);
        }
    }
    printf("\n odd no: in array are!\n");
    for(i=0;i<num;i++)
    {
        if(array[i] % 2 != 0)
        {
            printf("%d \t",array[i]);
        }
    }
    return 0;
}

