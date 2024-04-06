#include<stdio.h>
int main()
{
    int a[5],i,sum=0,avg;
    printf("Enter five elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];

    }
    avg=sum/5;
    printf("Sum of elements is %d",sum);
    printf("\nAvg of elements is %d",avg);
}