// WAP to add two numbers using a function.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    printf("Sum = %d\n", sum);

    return 0;
}

// WAP to find the maximum of two numbers using a function.
#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d", maximum(num1, num2));

    return 0;
}

// WAP to check whether a number is prime or not using a function.
#include <stdio.h>

int prime(int n)
{
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(prime(n))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}

// WAP to find the factorial of a number using a function.
#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial = %d\n", result);

    return 0;
}
