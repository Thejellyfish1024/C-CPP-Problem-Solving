#include <stdio.h>

int main()
{
    int temp = 6666;
    int isAllThreeOrSix = 1;
    while (temp > 0)
    {
        int val2 = temp % 10;
        if (val2 != 3 && val2 != 6)
        {
            isAllThreeOrSix = 0;
            break;
        }
        temp /= 10;
    }
    printf("%d ",isAllThreeOrSix);
}