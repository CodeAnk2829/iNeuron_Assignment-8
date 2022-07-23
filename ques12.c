#include <stdio.h>
int main()
{
    int i, j;
    char ch;
    for (i = 1; i <= 4; ++i)
    {
        for (j = 1, ch = 'A'; j <= 13; ++j)
        {
            if (j >= (2 * i - 1) && j <= (2 * (8 - i) - 1))
            {
                (j & 1) ? printf("%c", ch) : printf(" ");
                if((j < 7) && (j & 1)){
                    ++ch;
                }else if(j & 1){
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