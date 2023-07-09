#include<stdio.h>   

void swap(int a,int b);
void _swap(int *a,int *b);

void main(){
    int a = 10 , b = 20;

    printf("SWAPING BY USING CALL BY VALUE\n------------------------------------\n");
    printf(" a = %d\t\t and b = %d\n\n",a,b);
    swap(a,b);
    printf(" A = %d\t\t and B = %d\n\n\n\n",a,b);

    printf("SWAPING BY USING CALL BY REFERENCE\n---------------------------------\n");
    printf(" a = %d\t\t and b = %d\n\n",a,b);
    _swap(&a,&b);
    printf(" A = %d\t\t and B = %d\n\n",a,b);
    


}
    
     /*CALL BY VALUE*/
void swap(int a,int b){
    int t = a;
    a = b;
    b = t;
    


}

  
  /*CALL BY REFERENCE*/
void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}