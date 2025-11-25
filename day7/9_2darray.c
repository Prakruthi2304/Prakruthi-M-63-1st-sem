#include <stdio.h>
int main()
{
    int marks[2][2];

    printf("enter the elements: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    printf("array elements: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
}