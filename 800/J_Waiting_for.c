#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int people = 0;
    for (int i = 0; i < n; i++)
    {
        char event;
        scanf("%c", &event);
       
        int temp;
        scanf("%d", &temp);
         getchar();
        if (event == 'P')
        {
            people += temp;
        }
        else if (event == 'B')
        {
            if (temp - people > 0)
            {
               
                printf("YES\n");
                people = 0;
            }
            else
            {
                printf("NO\n");
                people = people - temp;
            }
        }
    }
}