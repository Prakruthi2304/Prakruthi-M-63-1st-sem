#include <stdio.h>
int main()
{
    int arr[5], max = 0;
    printf("enter a number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("maximum value is: %d\n", max);
}