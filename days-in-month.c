#include <stdio.h>
int main() {
    int month, year;
    scanf("%d %d", &month, &year);

    if ((month < 1 || month > 12) && year < 1) {
        printf("Invalid Month\nInvalid Year\n");
    } else if (month < 1 || month > 12) {
        printf("Invalid Month\n");
    } else if (year < 1) {
        printf("Invalid Year\n");
    } else {
        int daysInMonth[] = {31, (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        printf("%d\n", daysInMonth[month - 1]);
    }

    return 0;
}
