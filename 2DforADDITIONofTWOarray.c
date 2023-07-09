#include<Stdio.h>

void main()
{
    printf("ENTER ELEMENTS OF ARRAY A : \n");
  int arrayA[3][3] , arrayB[3][3], i , j ,arrayC[3][3];

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
    printf("ADDITION OF ARRAY A AND ARRAY B IS : \n");
      for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            arrayC[i][j] = arrayA[i][j] + arrayB[i][j];
        printf("%d  ",arrayC[i][j]);
      }
      
      printf("\n");
    }
    


  
}