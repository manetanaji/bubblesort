#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array :");
    scanf("%d", &n);
    int arr[n], temp, min, j;
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > min)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = min;
    }
    printf("the sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}