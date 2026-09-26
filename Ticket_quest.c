//discount for family,weekend and high purchaseof tickets(2500), 10% for everything like weekend, if they are family or not one ticket cost 100
#include <stdio.h>

int main() {
    int tickets;
    char isFamily, isWeekend;

    printf("Enter the number of tickets: ");
    scanf("%d", &tickets);

    printf("Is it a family purchase? (y/n): ");
    scanf(" %c", &isFamily);

    printf("Is it a weekend purchase? (y/n): ");
    scanf(" %c", &isWeekend);

    float totalCost = tickets * 100; // Each ticket costs 100

    // Apply discounts
    if (tickets > 25) {
        totalCost *= 0.9; // 10% discount for high purchase
    }
    
    if (isFamily == 'y' || isFamily == 'Y') {
        totalCost *= 0.9; // 10% discount for family
    }

    if (isWeekend == 'y' || isWeekend == 'Y') {
        totalCost *= 0.9; // 10% discount for weekend
    }

    printf("Total cost after discounts: %.2f\n", totalCost);

    return 0;
}