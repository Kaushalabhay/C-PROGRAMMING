#include<stdio.h>

void main(){
    int num[25] , i , n ,count = 0;
    
    printf("\nENTER THE 25 ELEMENTS OF THE ARRAY : \n"); 
    for(i = 0 ; i <= 24 ; i++)
    scanf("%d",&num[i]);

    printf("\nENTER THE NUMBER WHICH YOU WANT TO FIND : ");
    scanf("%d",&n);

    for(i = 0 ; i<= 24 ; i++){
        if(num[i]==n)
        count++;
    }

    printf("\nTHE NUMBER %d FOUND %d TIMES IN THE ARRAY",n,count);

}