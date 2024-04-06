#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    int *p;

    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of cubes of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        p = &digit;
        sum += pow(*p, digits);
        temp /= 10;
    }

    // Check if the number is Armstrong
    if (num == sum) {
        return 1;
    } else {
        return 0;
    }
}
