#include<stdio.h>
int main()
{
    int row,col, i;
    printf("Enter i= ");
    scanf("%d",&i);
    {
        for(row=i;row>=1;row--)
        {
            for(col=1;col<=row;col++)
            {
                printf("%c",row+96);
            }
            printf("\n");
        }
    }
    return 0;
}
