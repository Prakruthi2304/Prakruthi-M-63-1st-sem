#include <stdio.h>
int main()
{
    int num = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    int isprime = 1;
    if (num <= 1)
    {
        isprime = 0;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("not a prime number");
    }
}
