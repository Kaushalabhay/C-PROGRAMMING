#include<stdio.h>

void result(int,int,int,float*,float*);
void main()
{
  int m1 , m2 , m3;
  float average , percentage;
    
    printf("\nENTER MARKS OF THREE SUBJECTS:\n");
    printf("--------------------------------\n");
    scanf("%d%d%d",&m1,&m2,&m3);

    result(m1,m2,m3,&average,&percentage);
    printf("\nAVERAGE => %f\nPERCENTAGE => %f",average,percentage);
}
void result(int m1,int m2,int m3,float *average,float *percentage)
{
    *average = (( m1 + m2 + m3 )/3.0);
    *percentage = *average*100;
}