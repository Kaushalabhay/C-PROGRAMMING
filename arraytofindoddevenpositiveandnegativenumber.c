#include<stdio.h>

void main(){
    int num[25],i,neg = 0,pos = 0,odd = 0,even = 0,n;

    printf("\nENTER 25 ELEMENTS OF ARRAY\n");
    for ( i = 0; i <=24; i++)
        scanf("%d",&num[i]);

        for(i = 0;i<=24;i++)
        {
          num[i]<0?neg++:(pos++);
          num[i]%2?odd++:(even++);
        }
    printf("\nNEGATIVE ELEMENTS = %d",neg);
    printf("\nPOSITIVE ELEMENTS = %d",pos);
    printf("\nEVEN ELEMENTS = %d",even);
    printf("\nODD ELEMENTS = %d",odd);
    
}