#include <stdio.h>

int main(void)
{
    int n = 5;
    int m = 3;
    int i = 0;
    int j = 0;
    while (j < m)
    {
        i = 0;
        while (i < n)
        {
            printf("*");
            i++;
        }
        printf("\n");
        j++;
    }
}