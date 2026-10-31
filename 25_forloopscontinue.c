#include<stdio.h>

int main(){

    int n;
    printf("Enter the n");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){

        if(i==10){
            continue;      // skip this iteration now.
        }
        printf("%d\n", i);
    }
    return 0;
}