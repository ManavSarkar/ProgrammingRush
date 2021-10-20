#include <stdio.h>

void Binary(int n, char A[n])
{
    if (n < 1)
        printf("%s\n", A);
    else
    {
        A[n - 1] = '0';
        Binary(n - 1, A);
        A[n - 1] = '1';
        Binary(n - 1, A);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    char A[n + 1];
    A[n] = '\0';
    Binary(n, A);
    return 0;
}