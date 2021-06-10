#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int j=1;
   printf("Enter a number :");
   scanf("%d" ,&a);

   for (int i=a;i>=1;i--)
   {
       j = i * j;
   }
   printf("%d" , j);
   return 0;
}
