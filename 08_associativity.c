#include <stdio.h>

int main()
{

    int a = 6;
    int b = 3;
    int c = 2;

    printf("The value is %d\n", a * b / c);             // 9
    printf("The value is %d\n", 3 * b / 2 * c + 7 * a); // 50

    /*   9/2*c+7*a
         4*c+7*a
         8+42
         50   */

    return 0;
}
