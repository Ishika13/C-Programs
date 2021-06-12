#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[20];
};

int main()
{
    int i;
    struct student st[5];
    printf("Enter records: ");

    for(i=0;i<5;i++)
    {
        printf("\nEnter Rollno:");
        scanf("%d , &st[i].rollno");
        printf("\nEnter Name:");
        scanf("%s" , &st[i].name);
    }

    printf("\nStudent Information List:");
    for(i=0;i<5;i++)
    {
        printf("\nrollno:%d , Name:%s" , st[i].rollno, st[i].name);
    }
    return 0;
}
