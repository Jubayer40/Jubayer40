#include<stdio.h>
int main()
{
    while(1)
{
    int num, i, j;
    printf("Enter any number :");
    scanf("%d",&num);
    for(i=1; i <= num; i++)
    {
        for(j=1;j <= 10;j++)
        {
              printf("%d X %d = %d\n",i,j,i*j);

        }
        printf("\n");
    }
    return 0;
}
}

