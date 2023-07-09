         /*CALL BY REFERENCE*/
#include <stdio.h>
void junk(int*,int*);

void main()
{
    int i = 5,j = 2;
    junk(&i,&j);
    printf("\n%d\n %d",i,j);

}
void junk(int *i, int *j)
{
    *i = *i**i;
    *j = *j**j;

}
        /*CALL BY VALUE*/
#include <stdio.h>
void junk(int*,int*);

void main()
{
    int i = 5,j = 2;
    junk(i,j);
    printf("\n%d\n %d",i,j);

}
void junk(int i, int j)
{
    i = i*i;
    j = j*j;

}