#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array :");
    scanf("%d", &n);
    int arr[n], temp, min;
    for (int i = 0; i < n; i++)
    {
        printf("enter the element %d :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i){
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        
    }
    printf("the sorted array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}