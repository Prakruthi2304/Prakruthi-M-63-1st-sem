#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);
}