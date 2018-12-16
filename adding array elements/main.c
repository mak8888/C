#include <stdio.h>
#include <stdlib.h>

int main()

{
   int no, sums = 0, i, array[100];

   scanf("%d", &no);

   for (i = 0; i < no; i++)
   {
      scanf("%d", &array[i]);
      sums = sums + array[i];
   }

   printf("and the sum is= %d\n",sums);
   printf("you entered= %d\n",no);

   return 0;
}
