#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i, j, k;

    printf("수를 입력하세요. : ");
    scanf("%d", &num);

    for (i = num; i > 0; i--)
    {
        for (j = 1; j <= num; j++)
        {
            if (j >= i)
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

    for (k = 2; k < num + 1; k++)
    {
        for (j = 1; j <= num; j++)
        {
            if (j >= k)
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

    return 0;
}