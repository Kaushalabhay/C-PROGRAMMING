#include<stdio.h>

void main()
{
    for(int i = 1 ; i<=10 ; i++)
    {
        if(i == 5)
            break;                  /* FOR BREAK */
            printf("%d\n",i);
        
    }

printf("\n\n");

    for(int i = 1 ; i<=10 ; i++)
    {
        if(i == 5)
            continue;                  /* FOR BCONYINUE */
            printf("%d\n",i);
        
    }


}