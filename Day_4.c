// Day 4:  WAP to generate Fibonacci Series.
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;

        a = b;
        b = c;
    }

    return 0;
}

// wap to find nth fibonacci number.
#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1, c;

    scanf("%d", &n);

    if (n == 0)
        printf("%lld", a);
    else if (n == 1)
        printf("%lld", b);
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld", b);
    }

    return 0;
}

// wap to check armstrong number.
#include <stdio.h>

int main() {
    int n, a, b, c, sum;

    scanf("%d", &n);

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    sum = a*a*a + b*b*b + c*c*c;

    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}

// wap to find all armstrong numbers between 1 to 1000.
#include <stdio.h>

int main() {
    int n, rem, sum, temp;

    for (n = 1; n <= 1000; n++) {
        temp = n;
        sum = 0;

        while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}