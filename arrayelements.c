#include<stdio.h>
int main()
{
int a[5],i;
printf("Enter array Elements:");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
printf("\nThe elements of array at index %d is %d",i,a[i]);
}

