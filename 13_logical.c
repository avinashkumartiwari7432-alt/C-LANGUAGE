#include<stdio.h>

int main(){

    int a = 23;
    int b = 45;

    printf("the value of a and b is %d\n", a&&b);  // 1
    printf("the value of a or b is %d\n", a||b);  // 1
    printf("the value of not(a) is %d\n", !a);    // 0 
    printf("the value of not(b) is %d\n", !b);    // 0
    return 0;
}