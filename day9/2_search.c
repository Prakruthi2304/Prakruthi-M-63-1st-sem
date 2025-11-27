#include <stdio.h>
int main()
{
    int arr[50], pos = 0, ele = 0, size = 0;
    printf("enter a size of array: \n");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("array out of bound\n");
    }
    else
    {
        // to insert
        printf("enter elements: \n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        printf("enter a element to search: \n");
        scanf("%d", &ele);
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == ele)
            {
                printf("index is: %d \n", i);
                break;
            }
        }
    }
}