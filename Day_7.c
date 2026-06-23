//wap to find factorial of a number using recursion.
#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", fact(n));

    return 0;
}

//wap to find nth fibonacci number using recursion.
#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}

//wap to find sum of digits of a number using recursion.
#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum(n / 10);
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}

//wap to reverse a number using recursion.
#include <stdio.h>

int rev(int n, int r) {
    if (n == 0)
        return r;
    return rev(n / 10, r * 10 + n % 10);
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", rev(n, 0));

    return 0;
}