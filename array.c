#include<stdio.h>

int main(){
    int array[5] = {1 , 2 , 3 , 4 , 5 };

    printf("%d\n",*(array+2));
    printf("%d\n",*(array+4));
    printf("%d\n",*(array+5));
    printf("%d\n",*(array+6        ffff));
    


    return 0;
}