#include<stdio.h>
int main()
{
    int row, col, y;
    printf("Enter y= ");
    scanf("%d",&y);

    for(row=1;row<=y;row++)
    {
        for(col=1;col<=row;col++)
            printf("%c",col+64);
        printf("\n");
    }
    return 0;
}


