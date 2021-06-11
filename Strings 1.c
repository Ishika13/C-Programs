#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[5];
    char b[5];
    int c;

    gets(a);
    gets(b);

    c = strcmp(a,b);
    printf("%d\n" , c);
    return 0;
}
