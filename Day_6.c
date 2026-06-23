//wap to convert decimal to binary.
#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    return 0;
}

//WAP to convert binary to decimal.
#include <stdio.h>

int main() {
    int binary, rem, decimal = 0, base = 1;

    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("%d", decimal);

    return 0;
}

//WAP to count set bit ina number.
#include <stdio.h>

int main() {
    int n, count = 0;

    scanf("%d", &n);

    while (n > 0) {
        count += (n & 1);
        n = n >> 1;
    }

    printf("%d", count);

    return 0;
}
