#include <stdio.h>

#include<stdio.h>

float areaofcircle(float rad);
float areaofrectangle(float a , float b);
float areaofsquare(float side);

int main(){
    float a = 5.0;
    float b = 10.0;
    printf("AREA IF RECTANGLE IS : %f\n", areaofrectangle(a , b));

    char rad;
    rad = 1;
    printf("AREA OF THE CIRCLE : %f\n", areaofcircle(rad));

    char side;
    side =2;
    printf("AREA PF THE SQUARE : %f\n", areaofsquare( side));

    return 0;
}

float areaofcircle(float rad){
    return 3.14* rad * rad ;
}
float areaofrectangle(float a , float b){
    return a * b ;
}
float areaofsquare(float side){
    return side * side ;
}
