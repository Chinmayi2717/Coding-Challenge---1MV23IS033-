#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers less than or equal to %d.\n", n);
        return 0;
    }

    printf("Prime numbers less than or equal to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = true;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

