#include <stdio.h>

int main() {
    int units;
    float rate, discount, total;
    scanf("%d", &units);
    if (units < 0) {
        printf("Invalid Input!\n");
        return 0;
    }
    if (units <= 100) {
        rate = units * 5;
    }
    else if (units <= 300) {
        rate = 100 * 5 + (units - 100) * 7;
    }
    else {
        rate = 100 * 5 + 200 * 7 + (units - 300) * 10;
    }
    if (rate <= 1200) {
        discount = rate * (10.0/100);
        total = rate - discount;
    }
    else {
        total =rate;
    }
    printf("The electricity bill is: %0.2f.\n", total);

    return 0;
}
