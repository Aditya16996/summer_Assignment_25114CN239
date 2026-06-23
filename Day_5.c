//WAP to check perfect number.
#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}

//WAP to check strong number.
#include <stdio.h>

int main() {
    int n, temp, rem, fact, sum = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        fact = 1;

        for (int i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}

// WAP to find all factors of a number.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}