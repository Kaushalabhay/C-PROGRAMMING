/*IMPLEMENT THE SELECTION SORT  ALGORITHM ON A SET OF 25 NUMBERS*/
#include<stdio.h>

void main()
{
    int a[25],i,j,t;

    printf("\nENTER 25 NUMBERS\n");

    for(i = 0 ; i <= 24 ; i++)
        scanf("%d",&a[i]);          /*ENTER ARRAY ELEMENTS*/

    for(i = 0 ; i <= 23 ; i++)      /*NUMBER OF PASSES*/
    {
        for(j = i + 1; j<=24 ; j++) /*START A NEW ELEMENT*/
        {
        /*COMPARE AN ELEMENT a[i] WITH ALL ELEMENTS A[j] ONE BY ONE*/ 
            if(a[i]<a[j])
            {
                t = a[i];       /*INTERCHANGE IF GREATER THAN NEXT ELEMENT*/
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\nSORTED NUMBER ARE : \n");
    for( i = 0 ; i <= 24 ; i++)
    printf("%d\n",a[i]);        /*PRINT THE SORTED ARRAY*/

}

 