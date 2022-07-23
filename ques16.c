#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; ++i)
    {
        if (i < 9)
        {
            if (i & 1)
            {
                for (j = 1; j <= 9; ++j)
                {
                    if (j == (11 - i) / 2 || j == (9 + i) / 2)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            else
            {
                printf("\n");
            }
        }
        else
        {
            for (j = 1; j <= 9; ++j)
            {
                printf("*");
            }
        }
    }
    return 0;
}