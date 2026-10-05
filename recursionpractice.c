#include <stdio.h>

int factorial (int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int main () {
    int num=4;
    printf("%d! = %d \n", num, factorial(num)) ;
    return 0;
}