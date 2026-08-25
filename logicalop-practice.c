#include <stdio.h>
#include <math.h>
int main() {
    int a, id;
    printf("Enter your age: ");
    scanf("%d", &a);
    printf("Enter 1 if you have an ID card");
    scanf("%d", &id);
    if(a>=18 && id==1) {
        printf("You are eligible to vote");

    } else {
        printf("You are not eligible to vote");
    }
}