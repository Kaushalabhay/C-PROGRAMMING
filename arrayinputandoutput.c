#include<stdio.h>

int main(){
    int marks[3];
    printf("ENTER MARKS OF PHYSICS : ");
    scanf("%d",&marks[0]);

    printf("ENTER MARKS OF CHEMISTRY : ");
    scanf("%d",&marks[1]);

    printf("ENTER MARKS OF MATHS : ");
    scanf("%d",&marks[2]);

    printf("YOUR MARKS ARE IN P.C.M. ARE\n");
    printf("MARKS IN PHYSICS = %d,\nMARKS IN CHEMISTRY = %d,\nMARKS IN MATHS = %d,", marks[0] , marks[1] , marks[2]);

    return 0;

}