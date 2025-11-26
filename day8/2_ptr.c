#include <stdio.h>
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("value of num: %d\n", num);
    printf("value of num using ptr: %d\n", *ptr);
    printf("value of ptr: %p\n", ptr);
    printf("value of ptr using num: %p", &num);
}