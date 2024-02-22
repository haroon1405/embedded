// WAP to reverse the given number.

#include <stdio.h>

int main()
{
    int num = 0, digits = 0;
    printf("Enter the number :");
    scanf("%d", &num);
    int test_num = num;
    for (int i = 0; test_num != 0; i++)
    {
        test_num /= 10;
        digits++;
    }
    int new_num[digits], rev_num = 0;
    for (int i = digits; i > 0; i--)
    {
        int digit;
        digit = num % 10;
        new_num[digits - i] = digit;
        num /= 10;
    }
    for (int i = 0; i < digits; i++)
    {
        rev_num = (rev_num * 10 + new_num[i]);
    }
    printf("%d", rev_num);
}