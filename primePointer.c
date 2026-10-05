#include <stdio.h>
int isPrime (int n){
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return (n > 1); // Prime
}
void checkPrime(int n, int *result) {
    *result = (n>1);
    for (int i = 2; i <= n /2 && *result; i++) {
        if (n % i == 0)
            *result = 0; // Not prime
}
}
int main () {
int num=29;
int a = isPrime(num);
int b;
checkPrime(num, &b);
printf("isPrime %d, checkPrime %d \n", a, b);
return 0;
}
