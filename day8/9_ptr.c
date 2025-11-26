#include <stdio.h>
int main()
{
    int a = 20;
    int b = 40;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("before swapping:\n");
    printf("a: %d \n", a);
    printf("b: %d\n", b);
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("after swapping:\n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);
}