#include <stdio.h>
int main()
{
    int num, duplicate, reverse = 0, digit = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    duplicate = num;
    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (duplicate == reverse)
    {
        printf(" palindrome number \n");
    }
    else
    {
        printf(" not a palindrome number \n");
    }
}