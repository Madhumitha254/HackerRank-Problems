#include <stdio.h>

int main() {
    int guests, foodcost, deccost, music, extra;
    float budget;

    scanf("%f", &budget);
    scanf("%d", &guests);
    scanf("%d", &foodcost);
    scanf("%d", &deccost);
    scanf("%d", &music);
    scanf("%d", &extra);

    int totalcost = (foodcost * guests) + deccost + music + extra;

    if (totalcost <= budget) {
        if (guests > 5 && guests <= 50) {
            if (deccost < (0.3 * budget) || (foodcost * guests) < (0.5 * budget)) {
                if (guests > 25) {
                    if (music > 0) {
                        printf("Celebration Approved\n");
                    } else {
                        printf("Celebration Denied\n");
                    }
                } else {
                    printf("Celebration Approved\n");
                }
            }
        }
    } else {
        printf("Celebration Denied\n");
    }

    return 0;
}
