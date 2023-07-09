#include<Stdio.h>

void main()
{
    int array[2][3] , i , j , sum = 0 ;

    printf("ENTER THE ELEMENT OF THE ARRAY : \n");

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    printf("THE ARRAY IS : \n\n");

      for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++){
           
            printf("%d  ",array[i][j]);
           
            sum = sum + array[i][j];
        
        }

        printf("\n\n");

    }
    printf("\n\nSUM OF THE ARRAY IS : %d\n",sum);

}