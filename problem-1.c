#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i < n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            if (i % 2 == 0)
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
    }

    int star = (2 * n) - 1;
    space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {

            if (n % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    printf("-");
                }
                if (i % 2 == 0)
                {
                    printf("#");
                }
            }

            else
            {
                if (i % 2 != 0)
                {
                    printf("#");
                }
                if (i % 2 == 0)
                {
                    printf("-");
                }
            }
        }
        printf("\n");
        star = star - 2;
        space++;
    }

    return 0;
}