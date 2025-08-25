#include<stdio.h>

int main()
{
    float c,f;
    
    printf("enter the celsius : ");
    scanf("%f", & c);

    f = 1.8*c+32;

    printf("temperature converter : %.1f",f);

    return 0;

}