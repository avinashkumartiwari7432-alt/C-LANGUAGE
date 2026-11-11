#include<stdio.h>

int factorial(int n){

    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
  
}

int main(){

    int a;
    printf("Enter the a");
    scanf("%d", &a);


    int result = factorial(a);
    printf("%d", result);

    return 0;
}