#include<stdio.h>

int main(){
    int n;
    printf("ENTER THE VALUE OF N WHICH SHOULD BE GREATER THAN 2 : ");
    scanf("%d",&n);

    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;

    printf("THE FIBONACCHI SERIES IS : \n-----------------------------------------------------\n%d     %d     ",fibo[0],fibo[1]);

    for(int i = 2 ; i < n ; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2] ;
        printf("%d     ",fibo[i]);
    }
    printf("\n");
    return 0;
}
