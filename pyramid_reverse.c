#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int s = n;
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= s; j++)
        {
            printf("*");
        }

        s = s - 2;
        k = k + 1;

        printf("\n");
    }

    return 0;
}