#include <stdio.h>
int main()
{
    int arr[5];
    printf("enter a number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is : %d \n", i + 1, arr[i]);
    }
}
