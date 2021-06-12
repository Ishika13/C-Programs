#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("D:\\a1.txt" , "w");
    if (fp==NULL)
    {
        printf("File not present.");
    }

    else
    {
        printf("File opened.");
    }
    fclose(fp);
}
