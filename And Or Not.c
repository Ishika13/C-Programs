#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 7;
   int b = 13;
   int res;

   res = (a==b) && (a>b);
   printf("And %d\n " , res);

   res = (a==b) || (a>b);
   printf("Or %d\n " , res);

   res = !(a==b);
   printf("Not %d\n" , res);

   return 0;
}
