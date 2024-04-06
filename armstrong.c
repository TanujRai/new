#include<stdio.h>
int main()
{
    int n,c,r,arm=0;
    printf("Enter the positive number to check armstring number: ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    {
        printf("\nThe number is armstrong");
    }
    else
    printf("The number is not ");
    return 0;

}