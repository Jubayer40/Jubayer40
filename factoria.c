#include<stdio.h>
int main()
{
    int w,x, fact=1;
    printf("Enter any positive number : ");
    scanf("%d",&w);
    for(x=1; x <= w; x++)
    {
        fact= fact*x ;
    }
    printf("%d\n",fact);
    getch();
    return 0;
}
