#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;

    printf("Enter Marks : ");
    scanf("%d" , &marks);

    puts(marks>=80 ? "Pass" : "Fail");

    return 0 ;

}
