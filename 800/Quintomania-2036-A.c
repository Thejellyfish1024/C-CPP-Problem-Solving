#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int perfectMelodyArr[n];
    for (int i = 0; i < n; i++)
    {
        int num;
        int melodies[50];
        scanf("%d", &num);
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &melodies[i]);
        }
        int isPerfect = 1;
        for (int i = 0; i < num - 1; i++)
        {
            int dif = melodies[i] - melodies[i + 1];
            if (dif < 0)
            {
                dif = dif * -1;
            }
            if (dif != 7 && dif != 5)
            {
                isPerfect = 0;
                break;
            }
        }
        if (isPerfect)
        {
            perfectMelodyArr[i] = 1;
        }
        else
        {
            perfectMelodyArr[i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (perfectMelodyArr[i])
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}