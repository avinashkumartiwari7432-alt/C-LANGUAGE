#include<stdio.h>

int sum(int x, int y){              //  function prototype and definition.
    printf("the sum is %d\n", x+y);
    return x+y;
}
int main(){

    int a = 1;
    int b = 2;
    
    sum(a,b);            //  function call for 1st time.

    int a1 = 3;
    int b1 = 4;

    sum(a1,b1);         //  function call for 2nd time.

    int a2 = 5;
    int b2 = 6;

    sum(a2,b2);         //  function call for 3rd time.

    return 0;
} 