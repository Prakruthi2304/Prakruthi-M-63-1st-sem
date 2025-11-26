#include <stdio.h>
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("value of num: %d\n", num);
    printf("value of num using ptr: %p\n", *ptr);
    printf("address of num: %d\n", &num);
    printf("address of ptr using ptr: %p\n", &ptr);
    printf("address of num using address of a ptr: %p\n", &ptr);
}