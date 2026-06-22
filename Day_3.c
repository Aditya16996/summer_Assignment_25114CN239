//WAP to check whether a number is prime or not.
#include <stdio.h>

int main() {
    int num, i, flag = 0;

    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

//WAP to print prime numbers in a given range.
#include <stdio.h>

int main() {
    int start, end, i, j, flag;

    scanf("%d %d", &start, &end);

    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;

        flag = 0;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", i);
    }

    return 0;
}

//WAP to find GCD of two numbers.
#include <stdio.h>

int main() {
    int a, b, i, gcd = 1;

    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("%d", gcd);

    return 0;
}

//wap to find LCM of two no.
#include <stdio.h>

int main() {
    int a, b, lcm, max;

    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    lcm = max;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0)
            break;
        lcm++;
    }

    printf("%d", lcm);

    return 0;
}