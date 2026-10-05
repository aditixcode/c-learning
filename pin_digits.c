#include <stdio.h>
int countDigits(int n) {
    if (n==0) return 0;
    return 1+countDigits(n/10);
}

int main () {
    printf("%d\n", countDigits(7));
    printf("%d\n", countDigits(4821));
    return 0;
}