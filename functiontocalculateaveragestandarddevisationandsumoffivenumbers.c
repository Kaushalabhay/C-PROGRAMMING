#include <stdio.h>
#include <math.h>  

void function(int* , int* , double*);
void main()
{
    int sum,avg;
    double stdev; 

    function(&sum,&avg,&stdev);
    printf("\nSUM => %d\nAVERAGE => %d\nSTANDARD DEVIATION => %f",sum,average,stdev);
}
void function(int*sum,int*avg,double*stdev)
{
    int n1,n2,n3,n4,n5;

    printf("\nENTER 5 NUMBERS : \n");
    printf("--------------------\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    
    *sum = n1 + n2 + n3 + n4 + n5;
    *avg = *sum/5;
    *stdev = sqrt((pow((n1 - *avg),2)+ pow((n2 - *avg),2)+ pow((n3 - *avg),2)+ pow((n4 - *avg),2)+ pow((n5 - *avg),2))/4);

}



