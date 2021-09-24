#include <stdio.h>

int isArraySorted(int n, int arr[])
{
    if (n == 1)
    {
        return 1;
    }
    return (arr[n - 2] > arr[n - 1]) ? 0 : isArraySorted(n - 1, arr);
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int res = isArraySorted(n, arr);
    printf("%d\n", res);
    return 0;
}