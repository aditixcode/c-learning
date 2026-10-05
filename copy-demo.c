#include <stdio.h>
void trytochange(int n)
{
    n=999; //only changes the local copy of n, not the original variable
}
int main()
{
    int x=5;
    trytochange(x);
    printf("%d \n", x); //x is still 5
    return 0;
}