
#include<stdio.h>
int main()
{
    int row, col, y;
    printf("Entery= ");
    scanf("%d",&y);

    for(row=1;row<=y;row++)
    {
        for(col=1;col<=row;col++)
            printf("%c",row+64);
        printf("\n");
    }
    return 0;
}
