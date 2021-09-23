#include <stdio.h>

void input_matrix(int n, int m[n][n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements of Row %d\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d element : ", j + 1);
            scanf("%d", &m[i][j]);
        }
    }
}

void mul_matrix(int n, int m1[n][n], int m2[n][n], int res[n][n])
{
    for (int i = 0; i < n; i++)
    {
        res[i][0] = 0;
        for (int j = 0; j < n; j++)
        {

            for (int k = 0; k < n; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int m1[n][n], m2[n][n], res[n][n];
    input_matrix(n, m1);
    input_matrix(n, m2);
    // res[0][0] = 0;
    mul_matrix(n, m1, m2, res);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}