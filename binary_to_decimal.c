#include <stdio.h>
#include <math.h>

int main() {
    int binary[32], n, i, decimal = 0;

    printf("Enter number of bits: ");
    scanf("%d", &n);

    printf("Enter the binary number (one bit at a time):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }

    // Conversion logic
    for(i = 0; i < n; i++) {
        decimal += binary[i] * pow(2, n - i - 1);
    }

    printf("Decimal equivalent = %d", decimal);

    return 0;
}
