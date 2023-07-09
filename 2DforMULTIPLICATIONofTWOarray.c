#include<Stdio.h>

void main()
{
    printf("ENTER ELEMENTS OF ARRAY A : \n");
  int arrayA[3][3] , arrayB[3][3], i , j , k ,arrayC[3][3] , sum = 0;

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&arrayA[i][j] );
      }
    }

    printf("ENTER ELEMENTS OF ARRAY B : \n");

      for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&arrayB[i][j] );
      }
     
    }

    printf(" ARRAY A : \n");

      for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d  ",arrayA[i][j] );
      }
      printf("\n");
    }

    printf(" ARRAY B : \n");

      for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d  ",arrayB[i][j] );
      }
      printf("\n");
    }

    printf("\nMULTIPLICATION OF ARRAY A AND B IS : \n");

    for(i = 0 ; i < 3 ; i++)
    {      
       for(j = 0 ; j < 3 ; j++)
        {   
            for(k = 0 ; k < 3 ; k++)
            {
              sum = sum + arrayA[i][k] * arrayB[k][j];
            }
           arrayC[i][j] = sum; 
        }   
     
    }
        for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d  ",arrayC[i][j] );
      }
      printf("\n");
    }

}