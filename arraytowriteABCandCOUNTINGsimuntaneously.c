#include<stdio.h>

void main(){
    int array[26],i;
    for(i = 0 ; i<=25 ; i++)
    {
        array[i] = i + 'A';
        printf("\n|| %d || %c ||",array[i],array[i]);
    }
    }