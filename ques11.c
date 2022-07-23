#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1, ch = 'A'; j <= 17; ++j)
        {
            if (j >= 2*(6 - i) - 1 && j <= 2*(4 + i) - 1)
            {
                (j & 1) ? printf("%c", ch) : printf(" ");
                if((j < 9) && (j & 1)){
                    ++ch;
                }else if((j >= 9) && (j & 1)){
                    --ch;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}