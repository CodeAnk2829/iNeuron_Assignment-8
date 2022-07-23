#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 13; ++i)
    {
        if (i < 4)
        {
            for (j = 1; j <= 19; ++j)
            {
                if ((j >= 4 - i && j <= 6 + i) || (j >= 14 - i && j <= 16 + i))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else if (i == 4)
        {
            for (j = 1; j <= 19; ++j)
                if ((j >= 1 && j <= 6) || (j >= 13 && j <= 19))
                {
                    printf("*");
                }
                else if (j == 7)
                {
                    printf("MySirG");
                }
            printf("\n");
        }
        else
        {
            for (j = 1; j <= 19; ++j)
            {
                if (j >= i - 3 && j <= 23 - i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}