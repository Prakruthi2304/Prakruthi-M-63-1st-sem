#include <stdio.h>
int main()
{
    char ch;
    printf("entre a character:");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("capital letter");
    }
    else
    {
        printf("small letter");
    }
}