#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char exp[4];
        scanf("%s", &exp);
        if (exp[1] == '=')
        {
            if (exp[0] != exp[2])
                exp[0] = exp[2];
        }
        else if (exp[1] == '>')
        {
            if (exp[0] <= exp[2])
            {
                if (exp[0] == exp[2])
                    exp[1] = '=';
                else
                    exp[1] = '<';
            }
        }
        else if (exp[1] == '<')
        {
            if (exp[0] >= exp[2])
            {

                if (exp[0] == exp[2])
                    exp[1] = '=';
                else
                    exp[1] = '>';
            }
        }
        printf("%s\n", exp);
    }

    return 0;
}