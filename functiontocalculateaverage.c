#include <stdio.h>

void average(float,float,float,float,float);
void main()
{
    float a,b,c,d,e;
    printf("GOING TO CALCULATE THE AVERAGE : \n");
    printf("ENTER FIVE NUMBERS\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
}
void average(float a,float b,float c,float d,float e)
{
    float avg;
    avg = (a+b+c+d+e)/5;
    printf("THE AVERAGE OF FIVE NUMBER IS : %f",avg);

}
