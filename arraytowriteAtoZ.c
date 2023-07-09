#include<stdio.h>

void main(){
    int array[26],i;

    for(i = 0; i<=25 ; i++){
        array[i] = 'A' + i;
        printf("\n%c",array[i]);
    }
}