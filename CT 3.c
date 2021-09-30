#include<stdio.h>
int main()
{
    int j;
    char in[80];
    gets(in);
    for(j=0;in[j]!='\0';j++)
    {
        if(in[j]>97&& in[j] <=122 && in[j]!='a'&& in[j]!='e' && in[j]!='j'&& in[j]!='o'&& in[j]!='u')
        {
            in[j]=in[j]-32;
        }
    }
    puts(in);
    return 0;
}
