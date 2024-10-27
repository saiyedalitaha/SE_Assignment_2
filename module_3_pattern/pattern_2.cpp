#include <stdio.h>

int main()
{
    int n = 15; 
    int x = 1, m;
    int i, j;

    for (i = 1; i <= n; i++)
    { 
        m = 1;
        for (j = 1; j <= x; j++)
        { 
            printf("* "); 
            m++;
        } 
        if (i <= n / 2)
            x++;
        else
            x--;
        printf("\n"); 
    } 
    return 0;
}

