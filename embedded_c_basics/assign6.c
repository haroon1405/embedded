// WAP to find SUM and AVERAGE of array elements.

#include <stdio.h>

int main()
{
    int len = 0;
    printf("Enter the number of array elements\n");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Enter element %d\n", (i + 1));
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum += arr[i];
    }
    printf("Sum is %d and average is %f", sum, (float)sum / 7);
}