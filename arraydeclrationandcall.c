#include <stdio.h>

void printnumbers(int array[],int n);

void main(){
    int array[] = {44 , 55 , 66 , 77 , 88 , 99 , 00 , 43 , 22, 34 , 45};
    printnumbers(array,11);
   
}

void printnumbers(int array[],int n)
{
    for(int i = 0 ; i < n ; i++){
        printf("%d\t",array[i]);
    }

}
