//19.pattern
#include <stdio.h>

int main() {
    int i, n, j, c = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            c = c  ;
            printf("%d ", c);
            c++;
        }
        printf("\n");
        
    }

    return 0;
}

