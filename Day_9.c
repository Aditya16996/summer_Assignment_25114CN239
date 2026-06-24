//
#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//
#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

//
#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}

//
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}