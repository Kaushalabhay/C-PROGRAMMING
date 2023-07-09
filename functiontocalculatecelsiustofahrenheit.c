#include<stdio.h>

int convertCtoF(int c);

int main(){
    int c;
     printf("ENTER A NATURAL NUMBER OF WHICH YOU WANT A FACTORIAL.....\n");
    scanf("%d",&c);

    printf("THE VALUE OF %d CELSIUS TO FAHRENHEIT is : %d",c,convertCtoF(c));

}
int convertCtoF(int c)
{
    int f;
    if(c==0){
        return f = 32;
    }
    f = (c*9/5) + 32;
    return f;
}