#include<stdio.h>

void biggestnumber(int x , int y , int z);

int main(){
    int a , b , c;
    printf("ENTER THE THREE NUMBERS\n");
    scanf("%d\t%d\t%d",&a,&b,&c);

    printf("\na=%4d  b=%4d  c=%4d",a,b,c);
    biggestnumber(a,b,c);

    return 0;
}

void biggestnumber(int x , int y , int z){
        int big;
        printf("\n\nx=%4d  y=%4d  z=%4d",x,y,z);
        big = x;
        if(y>big)
        big = y;
        if(z>big)
        big = z;
        printf("\n\nLARGEST OF THREE NUMBER IS %d",big);
}