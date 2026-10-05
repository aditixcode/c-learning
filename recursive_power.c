#include <stdio.h>

int power (int base, int exp) {
    if (exp == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    } else {
        return base * power(base, exp - 1); // Recursive case
    }
}
int main () {
    int b = 2;
    int e = 3;
    printf("%d^%d = %d \n", b, e, power(b, e));
    return 0;
}