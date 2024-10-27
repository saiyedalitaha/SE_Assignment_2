#include<stdio.h>

int main()
{
    int num, row, col, count = 65;

    printf("Enter no of rows\n");
    scanf("%d", &num);

    printf("\n");
    for(row = 1; row <= num; row++)
    {
        for(col = 1; col <= row; col++)
        {
            if(count == 91)
                count = 65;

            printf("%c  ", count++);
        }
        printf("\n");
    }

    return 0;
}
