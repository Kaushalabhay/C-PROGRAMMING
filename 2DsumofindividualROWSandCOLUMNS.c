#include<Stdio.h>

void main()
{
    int array[3][3] , i , j , sumr , sumc;

    printf("ENTER THE ELEMENT OF THE ARRAY : \n");

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }

     printf("THE ARRAY IS : \n\n");

     for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
        
    }

   
      for(i = 0 ; i < 3 ; i++)
    {   
        sumr = sumc = 0;

        for(j = 0 ; j < 3 ; j++){
           
        sumr = sumr + array[i][j];
        sumc = sumc + array[j][i];
           
          
        } 
    printf("\n\nSUMR IS : %d ,  SUMC IS : %d\n",sumr,sumc);
    

    }
   // printf("\n\nSUMR IS : %d\n",sumr);
    //printf("\n\nSUMc IS : %d\n",sumc);

}