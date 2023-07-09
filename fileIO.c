#include<stdio.h>

int main()
{
    int sum = 0 ;
    int average = 0;
    int x = 0;
    int num[4];

     for(x = 0 ; x <4 ; x++){
        printf("ENTER NUMBER : %d\n",(x+1));
        scanf("%d",&num[x]);
     }
     for(x = 0 ; x <4 ; x++){
        sum = sum + num[x];
     }

     printf("SUM OF ALL NUMBERS IS : %d\n",sum);
     
     average = sum/4;
     
     printf("AVERAGE OF THE ENTERED NUMBER IS : %d",average);

     return 0;
}