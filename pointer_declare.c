#include <stdio.h>
int main()
{
    int x =10;
    int *p=&x; //p now holds the address of x
    printf("%d \n", *p); //reads x though p ->10
    *p=99; //changes x through p
    printf("%d \n", x);  //x is now 99
    return 0;
}