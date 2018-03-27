#include<stdio.h>
int main()
{
    int b,l,h,volume;
    printf("enter the length width height:");
    scanf("%d %d %d",&l,&b,&h);
    volume=l*b*h;
    printf("total volume is:%d",volume);
}
