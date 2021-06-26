#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[] = "hello";
    printf("%s\n" , strlwr(a));
    printf("%s\n" , strupr(a));
    printf("%s\n" , strrev(a));
    return 0;
}
