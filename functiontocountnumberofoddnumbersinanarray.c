#include<stdio.h>

int countodd(int array[],int n);    //declaration of variables

int main(){

    int array[] = {13,23,5,56,7,68,5,57,4,34,57};       //declaration of the elements of the array
    countodd(array,11);                                 //calling the function
    printf("%d\n\t",countodd(array,11));         //printing the output of the number of odd elements in the array
    
    return 0;

}

int countodd(int array[],int n){                //function defination
    int count = 0;                              
    for(int i = 0;i<n;i++){  //here i++ passed to the next element for varification that whether it is odd or not
        if(array[i] % 2 != 0){  //ODD
             count++;          //it increase the number of count of odd numbers in the storage i.e. it tells
                                //that there is one more odd number       
        }
    }
    return count;               //it gives output of the number of odd elements in the array
}
