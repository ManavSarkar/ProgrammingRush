// Program to print fibonacci series
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms you want : ");
    scanf("%d", &n);
    int fib[n];
    if (n == 2)
    {
        printf("1 1\n");
    }
    else
    {
        fib[0] = 1;
        fib[1] = 1;
        for (int i = 2; i < n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        for (int i = 0; i < n; i++)
        {
            printf(" %d ", fib[i]);
        }
    }
    return 0;
}