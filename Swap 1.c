#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 145;
    int b = 210;
    int t;

    t=a;
    a = b;
    b = t;

    printf("%d , %d\n" , a , b);
    return 0 ;
}
