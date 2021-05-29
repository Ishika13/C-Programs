#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12;
    int b = 15;

    printf("And : %d\n" , a&b);
    printf("Or : %d\n" , a|b);
    printf("Xor : %d\n" , a^b);
    printf("Compliment : %d\n" , ~a);
    printf("Compliment : %d\n" , ~-10);

    printf("Left Shift : %d\n" , a<<0);
    printf("Left Shift : %d\n" , a<<1);
    printf("Right Shift : %d\n" , a>>0);
    printf("Right Shift : %d\n" , a>>1);


    return 0;
}
