#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    char b[20];

    gets(a);

    b[20]=strrev(a);

    int c;

    c = strcmp(a,b);
    if (c==0)
    {
        printf("Palindrome.");
    }
return 0;
}
