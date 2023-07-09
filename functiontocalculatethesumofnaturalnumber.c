#include<stdio.h>

int sumNN(int n);

int main(){
    int n;
     printf("ENTER A NATURAL NUMBER TILL WHICH YOU WANT TO HAVE A SUM OF\n");
    scanf("%d",&n);
   printf("THE SUM OF GIVEN NATURAL NUMBER IS : %d",sumNN(n));

}

int sumNN(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sumNN(n-1);
    int sumN = sumNm1 + n;
    return sumN;

}