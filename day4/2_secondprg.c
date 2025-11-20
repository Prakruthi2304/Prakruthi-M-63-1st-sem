#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    printf("enter the first value a");
    scanf("%d", &a);
    printf("enter the second value b");
    scanf("%d", &b);
    c = a - b;
    printf("difference of %d and %d:%d\n", a, b, c);
}