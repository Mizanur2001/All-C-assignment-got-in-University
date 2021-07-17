#include <stdio.h>
int main()
{
   int n, i;
   printf("Ener a input\n");
   scanf("%d", &n);
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   for (i = 0; i < 10; i++)
   {
      if (arr[i] == n)
      {
         printf(" %d is present at location arr[%d]\n", n, i);
         break;
      }
   }
   if (i == 10)
   {
      printf("%d  is not available in the array\n", n);
   }

   return 0;
}