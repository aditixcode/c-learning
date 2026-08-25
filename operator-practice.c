#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    printf("enter the value of a and b");
    scanf("%d", &a);
    scanf("%d", &b);
    int sum= a+b;
    int product= a*b;
    int diff=a-b;
    int q=a/b;
    int r=a%b;
    printf("sum of a and b is %d \n", sum );
     printf("Difference of a and b is  %d \n", diff);
    printf("Product of a and b is  %d \n", product);
    printf("Quotient of a and b is  %d \n",q);
     printf("Remainder of a and b is  %d \n", r);
}
