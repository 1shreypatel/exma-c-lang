#include<stdio.h>

int main()
{
    int one,second,finla;

    printf("enter the first angle : ");
    scanf("%d",&one);

    printf("enter the second angle : ");
    scanf("%d",&second);

    finla=180-one-second;

    printf("finla ans : %d",finla);

    return 0;
}