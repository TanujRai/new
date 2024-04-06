#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,j,k,m,n,o;
    printf("Enter DOB (DD/MM/YYYY)=");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("Enter C.D (DD/MM/YYYY)=");
    scanf("%d/%d/%d",&d,&e,&f);
    g=(c*365)+(b*30)+a;
    h=(f*365)+(e*30)+d;
    j=h-g;
    k=j/365;
    m=j%365;
    n=m/30;
    o=m%30;
    printf("Your age is=%d years %d months %d days",k,n,o);
    return 0;


}