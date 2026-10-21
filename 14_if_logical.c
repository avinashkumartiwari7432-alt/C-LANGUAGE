#include<stdio.h>

int main(){

    int a = 6;
    float b = 0.0;

    if(a&&b){                         
        printf("both are true\n");  
    }
    if(a||b){
        printf("IT IS TRUE\n");
    }
    return 0;
}

/*   if(a){
        if(b){
        printf("both are true\n"); // if AND operator doen't exist.
        }
        
    }   

              */
