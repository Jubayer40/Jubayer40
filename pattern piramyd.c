#include<stdio.h>
int main()
{
    int row, col, j;
    printf("Enter =j");
    scanf("%d", &j);
    for(row=1; row<=j; row++)
    {
        for(col=1; col<=j-row; col++)
            printf(" ");
        for(col=1; col<=2*row-1; col++)
            printf("*");

            printf("\n");

    }

    return 0;
}

