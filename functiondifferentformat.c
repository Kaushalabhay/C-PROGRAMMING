                    //DIFFERENT FORMAT FOR WRITER FUNCTION
#include <stdio.h>

void printhello(){
    printf("WELCOME TO THE WORLD OF C\n");
    printf("PROGRAMMING IS NOTHING BUT LOGICAL IMPLEMENTATION\n");
}
void main(){
    printhello();
}

                    /* OR */

#include<stdio.h>
void printhello();

int main(){
    printhello();
    return 0;
}
void printhello(){
    printf("WELCOME TO THE WORLD OF C\n");
    printf("PROGRAMMING IS NOTHING BUT LOGICAL IMPLEMENTATION\n");
}