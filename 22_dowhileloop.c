#include<stdio.h>

int main(){

    int i;
    printf("Enter the i");
    scanf("%d", &i);

    do{
        printf("%d\n", i);
        i++;
        }while(i<=4);

        return 0;
}