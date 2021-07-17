#include <stdio.h>
int main()
{
   int i = 0;
   int j = 0;
   printf("post incriment:-\n");
   while (i++ < 5)
   {
      printf("%4d", i);
   }
   printf("\npre incriment:-\n");
   while (++j < 5)
   {
      printf("%4d", j);
   }
   printf("\n");
   return 0;
}