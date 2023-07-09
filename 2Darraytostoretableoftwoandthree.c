#include <stdio.h>

void storetable(int array[][10],int n , int m , int number);

void main(){
    int table[2][10];
    storetable(table,0,10,2);
    storetable(table,1,10,3);

    for(int i = 0 ; i < 10 ; i++){
        printf("%d\t",table[0][i]);
    }

    printf("\n");

    for(int i = 0 ; i < 10 ; i++){
        printf("%d\t",table[1][i]);
    }    
    printf("\n");
    
}

void storetable(int array[][10],int n , int m,int number){
    for(int i = 0 ; i < m ; i++){
        array[n][i] = number * (i+1);
    }
}

                    /*OR*/

#include<stdio.h>

void storetable(int array[][10],int n , int m , int number);

void main(){
    int number;
    int table[2][10];

    storetable(table,0,10,50);
    storetable(table,1,10,20);

    for(int i = 1 ; i < 10 ; i++){
        printf("%d * %d = %d\n",i,50,table[0][i]);
    }
    printf("\n");

    for(int i = 1 ; i < 10 ; i++){
        printf("%d * %d = %d\n",i,20,table[1][i]);
    }
}

void storetable(int array[][10],int n,int m , int number){
    for(int i = 0 ; i < 10 ; i++){
        array[n][i] = number * (i+1);
    }
}
                    