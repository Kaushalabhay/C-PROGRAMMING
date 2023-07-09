#include<stdio.h>

int main()
{
    int addhar[5];
    int *ptr = &addhar[0];
    
    for(int i = 0 ; i < 5 ; i++){
        printf("%d index : ",i);
        scanf("\n\n\n%d",&addhar[i]);
    }

printf("\n\n====================\n\n\nOUTPUT IS:\n\n--------------------\n\n");


    for(int i = 0 ; i < 5 ; i++){
        printf("%d index = %d\n\n----------------------\n\n",i,*(ptr+i));
    
    }
    return 0;
}