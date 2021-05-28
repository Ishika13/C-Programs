#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char s[10] = "Meow";
    char *p = s;

    for (i=0;i<10;i++)
    {
        printf("%c\n",*p);
        p++;
    }
    return 0;
}
