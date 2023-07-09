#include <stdio.h>

void sum(int,int);
void main()
{
    int a,b,result;
    printf("\nGOING TWO CALCULATE THE SUM OF TWO NUMBERS :\n");
    printf("__________________________________________________\n");
    printf("\nENTER TWO NUMBERS : \n");
    scanf("%d%d",&a,&b);
    sum(a,b);

}
void sum(int a,int b)
{
    printf("\nTHE SUM IS %d",a+b);
}