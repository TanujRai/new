#include <stdio.h>

void area_triangle(float base, float height, float *area);

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area_triangle(base, height, &area);

    printf("The area of the triangle is %.2f\n", area);

    return 0;
}

void area_triangle(float base, float height, float *area) {
    *area = 0.5 * base * height;
}
