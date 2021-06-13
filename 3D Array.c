#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a [3][3],i,j;
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ;j++)
        {
            printf("Enter a number :");
            scanf("%d" , &a[i][j]);
        }
    }

    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            printf("%d\n" , a[i][j]);
        }
    }
return 0;

}
