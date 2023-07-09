#include<stdio.h>

int main(){
    float price[3] = {10,50,80};

    /*WE HAVE TWO METHODS TO INPUT NUMBER IN ARRAY BUT MOST
    FAVOURABLE IS THE UPPER ONE*/


    //float price [3];
    //printf(" ENTER THREE PRICES : \n ");
    //scanf("%f",&price[0]);
    //scanf("%f",&price[1]);
    //scanf("%f",&price[2]);

    printf("FINAL PRICE AFTER GST ARE\n");
    printf("FINAL PRICE 1 : %f\n", price[0]+(0.18*price[0]));
    printf("FINAL PRICE 2 : %f\n", price[1]+(0.18*price[1]));
    printf("FINAL PRICE 3 : %f\n", price[2]+(0.18*price[2]));
    return 0;
}