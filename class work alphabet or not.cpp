#include<stdio.h>
main()
{
    char c;
    printf("enter a string:");
    scanf("%c",&c);
    if((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
    {
        printf("given no is alphalept");
    }
    else
    printf("not a alphalepet");
}
