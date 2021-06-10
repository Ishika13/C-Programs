#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 20;
    int b = 45;
    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d,%d\n" , a,b);
}
