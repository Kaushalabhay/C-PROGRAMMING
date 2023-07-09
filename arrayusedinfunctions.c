#include<stdio.h>

void num(int  a[])
{
    printf(" %d %d %d %d", a[0] , a[1] , a[2] , a[3] );

}
void main()
{
    int a[4] = { 20 , 30 , 40 , 50};
    num (a);
}