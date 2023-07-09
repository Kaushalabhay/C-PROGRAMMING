#include<stdio.h>

int main(){
    
    float items[3]={30.54456,4.3430,50.344};                 

    printf("THE PRICE OF FIRST ITEM AFTER GST = %f\n\n",items[0] + (0.18 * items[0]));
    printf("THE PRICE OF SECOND ITEM AFTER GST = %f\n\n",items[1] + (0.18 * items[1]));
    printf("THE PRICE OF THIRD ITEM AFTER GST = %f\n\n",items[2] + (0.18 * items[2]));

}
