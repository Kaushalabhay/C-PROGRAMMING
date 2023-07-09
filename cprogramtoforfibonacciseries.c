#include <stdio.h>

int main(){
    int i , n , n1 = 0 , n2 = 1 , n3 ;

    printf("ENTER THE NUMBER OF TERMS :\t");
    scanf("%d", &n );
    printf(" %d %d ", n1 , n2);

    for ( i = 1; i <= 10 ; i++)
    {
        n3 = n1 + n2;
        printf(" %d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}