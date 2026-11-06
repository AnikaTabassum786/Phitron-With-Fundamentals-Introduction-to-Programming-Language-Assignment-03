#include <stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];

    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        if (a[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    printf("%d %d",evenCount,oddCount);
}

int main()
{

    odd_even();

    return 0;
}