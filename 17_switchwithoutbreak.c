#include<stdio.h>

int main(){

    int a;               // variable declaration.
    printf("Enter a:");
    scanf("%d", &a);

    switch(a){             // Without break.
        case 1:
          printf("you entered 1\n");
        case 2:
          printf("you entered 2\n");
        case 3:
          printf("you entered 3\n");
        case 4:
          printf("you entered 4\n");
        default:
          printf("nothing entered\n");  
        
    }
    return 0;
}