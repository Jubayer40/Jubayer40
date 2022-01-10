#include<stdio.h>
int main()
{
    int row,col,i;
    printf("Enteri= ");
    scanf("%d",&i);
    for(row=i;row>=1;row--)
    {
        for(col=1;col<=row;col++)
           {
              printf("%d",col%2);
           }
        printf("\n");
    }
    return 0;
}

