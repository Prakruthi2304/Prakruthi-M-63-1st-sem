#include <stdio.h>
int main()
{
    int arr[5], min = 0;
    printf("enter a number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("minimum value is: %d\n", min);
}