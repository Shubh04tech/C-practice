#include <stdio.h>

// 1st bit
void partA(int item, int *product) {
    if (item != 0) {
        *product *= item;
    }
    printf("Product: %d\n", *product);
}

// 2nd bit
void partB(int x, int y) {
    y = (x > y) ? (x - y) : (y - x);
    printf("Absolute difference: %d\n", y);
}

// 3rd bit
void partC(int x, int *zero_count, int *minus_sum, int *plus_sum) {
    if (x == 0) {
        (*zero_count)++;
    } else if (x < 0) {
        (*minus_sum) += x;
    } else {
        (*plus_sum) += x;
    }
    printf("Zero count: %d, Minus sum: %d, Plus sum: %d\n", *zero_count, *minus_sum, *plus_sum);
}

int main() {
    int product = 1;
    int zero_count = 0, minus_sum = 0, plus_sum = 0;
    int item, x, y;

    // 1st bit function call
    printf("Enter a number for Bit 1: ");
    scanf("%d", &item);
    partA(item, &product);

    // 2st bit function call
    printf("Enter two numbers for Bit 2: ");
    scanf("%d %d", &x, &y);
    partB(x, y);

    // 3st bit function call
    printf("Enter numbers for Bit 3:\n");
    scanf("%d", &x);
    partC(x, &zero_count, &minus_sum, &plus_sum);

    return 0;
}
// In the first part, the simple multiplication logic is used.
// For the second part, a ternary operator is used to check which variable is greater.
// For the third part, if the value of x is 0, zero_count is incremented by 1.
// If x is less than 0, minus_sum is incremented by x.
// Otherwise, plus_sum is incremented by x as required by the question.
