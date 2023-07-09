#include<stdio.h>

int main(){
    int i = 0 , j = 0 ;
    int a[0][0];
    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = 0 ; j < 3 ; j++)
        {
            printf(" [%d] [%d] = %d \n", i , j , a[i][j]);

        }

    }
}