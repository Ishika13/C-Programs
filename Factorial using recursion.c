#include<stdio.h>       //For Printf and Scanf

int factorial(int n)
{
        if(n >= 1)
        {
                printf("%d * factorial(%d)\n", n, n-1);
                int a = n*factorial(n-1);
                printf("return %d\n", a);
                return a;
        }
        else
        {
                printf("return 1\n");
                return 1;
        }
}

int main()
{
        int x;
        printf("Enter X\n");
        scanf("%d",&x);
        int y = factorial(x);
        printf("The factorial of %d is: %d\n", x, y);
}