#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    double b;
    float c;
    int add;
    double sub;
    float mul;

    printf("Enter A : " );
    scanf("%d" , &a);

    printf("Enter B : ");
    scanf("%lf" , &b);

    printf("Enter C : ");
    scanf("%f" , &c);

    add = a+b;
    sub = b-c;
    mul = a*c;

    printf("Addition : a+b= %d\n" , add);
    printf("Subtraction : b-c= %lf\n " , sub);
    printf("Multiplication : a*c= %f\n " , mul);

}
