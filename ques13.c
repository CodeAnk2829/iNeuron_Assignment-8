#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    for (i = 1; i <= 7; ++i)
    {
        for (j = 1, ch = 'A'; j <= 25; ++j)
        {
            if (j <= (2 * (8 - i) - 1) || j >= (2 * (5 + i) + 1))
            {
                (j & 1) ? printf("%c", ch) : printf(" ");
            }
            else
            {
                printf(" ");
            }
            if((j < 13) && (j & 1)){
                ++ch;
            }else if(j & 1){
                --ch;
            }
        }
        printf("\n");
    }
    return 0;
}