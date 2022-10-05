#include <stdio.h>

int main()
{

    int C[10][10], A[10][10], B[10][10];
    int i, j, k;
    int m, n, q, r;
    int sum = 0;

    printf("Enter rows and colum of 1st matrice \n");
    scanf("%d %d", &m, &n);
    printf("Enter rows and colum of 2nd matrice \n");
    scanf("%d %d", &q, &r);
    if (n == q)
    {
        printf("Enter the of 1st matrice \n");
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &A[i][j]);

        printf("Enter the of 2nd matrice \n");
        for (i = 0; i < q; i++)
            for (j = 0; j < r; j++)
                scanf("%d", &B[i][j]);
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++){
                for (k = 0; k < r; k++)
                    sum = sum + (A[i][k] * B[k][j]);
                C[i][j] = sum;
                sum = 0;
            }
        for (i = 0; i < m; i++){
            for (j = 0; j < r; j++)
                printf("%d ", C[i][j]);
            printf("\n");
            }
    }
    return 0;
}  
