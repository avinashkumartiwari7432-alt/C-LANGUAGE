#include <stdio.h>

int main()
{

    int a = 6;
    int b = 3;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int g = a / b;

    printf("The value of c is %d\n", c);
    printf("The value of d is %d\n", d);
    printf("The value of e is %d\n", e);
    printf("The value of g is %d\n", g);
    printf("The value of a divisible by b is %d\n", a % b);

    return 0;
}