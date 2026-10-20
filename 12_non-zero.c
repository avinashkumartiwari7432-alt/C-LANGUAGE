#include<stdio.h>

int main(){

    if(2){
        printf("this if is executed\n");
    }
    if(2345){
        printf("this if is also executed\n");
    }
    if(3.4){
        printf("this if is also executed\n");
    }
    if('h'){
        printf("THIS IF IS ALSO EXECUTED\n");
    }
    if(0){
        printf("This if is not executed\n");
    }
    return 0;
}

 // 0 means false 
 // non-zero means true.