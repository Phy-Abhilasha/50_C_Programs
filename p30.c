#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of multiplication tables you want: ");
    scanf("%d", &n);

    // Loop to generate multiplication tables
    for (i = 2; i <= n + 1; i++) {
        printf("Multiplication table of %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

