#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; ++i)
    {
        if (i >= 2)
        {
            if (i & 1)
            {
                for (j = 1; j <= 9; ++j)
                {
                    if (j == (i + 1) / 2 || j == (19 - i) / 2)
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