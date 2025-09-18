#include <stdio.h>

int main() {
    int late;
    int fine;

    printf("Enter the number of days late: ");
    scanf("%d", &late);

    if (late <= 5) {
        fine = late * 2;
        printf("Fine: ₹%d\n", fine);
    } else if (late <= 10) {
        fine = (5 * 2) + (late - 5) * 4;
        printf("Fine: ₹%d\n", fine);
    } else if (late <= 30) {
        fine = (5 * 2) + (5 * 4) + (late - 10) * 6;
        printf("Fine: ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}