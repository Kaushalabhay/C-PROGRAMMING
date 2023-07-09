#include<stdio.h>

void square(int n);
void _square(int* n);


void main(){

    int number = 4;
    printf("%d is the value of number\n",number);
    square(number);
    printf("%d is the value of square of number\n\n\n\n\n\n",number);


     printf("%d is the value of number\n", number);
    _square(&number);
    printf("%d is the value of square of number\n", number);


}

        /*CALL BY VALUE*/
void square(int n){
    n = n * n;
}

     /*CALL BY REFERENCE*/
void _square(int *n){
    *n = (*n) * (*n);
}