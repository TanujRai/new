#include <stdio.h>

int main()
{
    int l, b;
    printf("Length of rectangle:\n");
    scanf("%d", &l);
    printf("Breadth of rectangle:\n");
    scanf("%d", &b);

    printf("l=%d b=%d\n", l, b);
    int area = l * b;
    printf("The area of rectangle is: %d", area);

    return 0;
}