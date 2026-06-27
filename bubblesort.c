#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array :");
    scanf("%d", &n);
    int arr[n], temp;
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("the sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}