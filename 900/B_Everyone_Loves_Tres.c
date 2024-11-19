#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int numArr[n];
    for (int i = 0; i < n; i++)
    {
        int val;
        long long int tres = -1;
        scanf("%d", &val);

        if (val < 2)
        {
            numArr[i] = -1;
        }
        else
        {
            long long int maxLimit = 6;
            long long int minLimit = 3;
            for (int j = 1; j < val; j++)
            {
                maxLimit = (maxLimit * 10) + 6;
                minLimit = (minLimit * 10) + 3;
            }
            for (long long int j = minLimit; j <= maxLimit; j++)
            {
                if (j % 66 == 0)
                {
                    int isAllThreeOrSix = 1;
                    long long int temp = j;

                    while (temp > 0)
                    {
                        long long int val2 = temp % 10;
                        if (val2 != 3 && val2 != 6)
                        {
                            isAllThreeOrSix = 0;
                            break;
                        }
                        temp /= 10;
                    }

                    if (isAllThreeOrSix)
                    {
                        tres = j;
                        break;
                    }
                    else
                    {
                        j = j + 65;
                    }
                }
            }
            numArr[i] = tres;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%lld\n", numArr[i]);
    }
}

