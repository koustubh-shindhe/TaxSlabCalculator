#include <stdio.h>

int main() {
    int income;
    float tax = 0;  // Using float to handle decimal numbers

    printf("Enter The Income: ");
    scanf("%d", &income);

    // Conditions for tax below 3L
    if (income <= 300000) {
        tax = 0;
    }
    // Conditions for the range 3L to 6L
    else if (income > 300000 && income <= 600000) {
        tax = 0.05 * (income - 300000);  
    }
    // Conditions for the range 6L to 9L
    else if (income > 600000 && income <= 900000) {
        tax = 0.05 * (600000 - 300000) + 0.10 * (income - 600000);  // 5% + 10%
    }
    // Conditions for the range 9L to 12L
    else if (income > 900000 && income <= 1200000) {
        tax = 0.05 * (600000 - 300000) + 0.10 * (900000 - 600000) + 0.15 * (income - 900000);  // 5% + 10% + 15%
    }
    // Conditions for the range 12L to 15L
    else if (income > 1200000 && income <= 1500000) {
        tax = 0.05 * (600000 - 300000) + 0.10 * (900000 - 600000) + 0.15 * (1200000 - 900000) + 0.20 * (income - 1200000);  // 5% + 10% + 15% + 20%
    }
    // Conditions for the above 15L
    else {
        tax = 0.05 * (600000 - 300000) + 0.10 * (900000 - 600000) + 0.15 * (1200000 - 900000) + 0.20 * (1500000 - 1200000) + 0.30 * (income - 1500000);  // 5% + 10% + 15% + 20% + 30%
    }

    printf("The total tax you need to pay is = %.2f\n", tax);
    return 0;
}
