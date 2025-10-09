//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitLossAmount;
    float percentage;

    // Input cost price and selling price from the user
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss amount
    profitLossAmount = sellingPrice - costPrice;

    // Determine if it's a profit, loss, or no change
    if (profitLossAmount > 0) {
        // It's a profit
        percentage = (profitLossAmount / costPrice) * 100;
        printf("Profit: %.2f\n", profitLossAmount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profitLossAmount < 0) {
        // It's a loss
        percentage = ((-profitLossAmount) / costPrice) * 100; // Use absolute value for loss amount
        printf("Loss: %.2f\n", -profitLossAmount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        // No profit, no loss
        printf("No Profit, No Loss.\n");
    }

    return 0;
}