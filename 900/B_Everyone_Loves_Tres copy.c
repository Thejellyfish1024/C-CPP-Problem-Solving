#include <stdio.h>
#include <string.h>

void find_smallest_divisible(int n)
{
    if (n < 2)
    {
        printf("-1\n");
        return;
    }
    else if (n == 2)
    {
        printf("66\n");
        return;
    }
    else if (n == 3)
    {
        printf("-1\n");
        return;
    }
    else if (n == 4)
    {
        printf("3366\n");
        return;
    }
    else
    {
        char result[n + 1];
        memset(result, '3', n);
        result[n] = '\0';
        if (n % 2 == 0)
        {
            result[n - 1] = '6';
            result[n - 2] = '6';

            printf("%s\n", result);
        }
        else
        {
            result[n - 1] = '6';
            result[n - 2] = '6';
            result[n - 3] = '3';
            result[n - 4] = '6';
            printf("%s\n", result);
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        find_smallest_divisible(n);
    }
    return 0;
}
