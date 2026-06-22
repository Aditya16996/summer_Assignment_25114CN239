//wap to find the sum of digits of a number .    
#include <stdio.h>

int main() {
    int num, sum = 0;

    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("%d", sum);

    return 0;
}

//wap to reverse a number .
#include <stdio.h>

int main() {
    int num, rev = 0;

    scanf("%d", &num);

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    printf("%d", rev);

    return 0;
}

//wap to check whether a number is palindrome or not .
#include <stdio.h>

int main() {
    int num, temp, rev = 0, digit;

    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (num == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

//wap a program to find the product of digits of a number .
#include <stdio.h>

int main() {
    int num, product = 1;

    scanf("%d", &num);

    if (num == 0) {
        product = 0;
    } else {
        while (num != 0) {
            product *= num % 10;
            num /= 10;
        }
    }

    printf("%d", product);

    return 0;
}