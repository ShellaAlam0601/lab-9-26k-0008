
#include <stdio.h>

float calculateDiscount(float amount, char type)
{
    float discount;

    if (type == 'P')
        discount = 20;
    else if (type == 'G')
        discount = 10;
    else
        discount = 5;

    if (amount > 10000)
        discount = discount + 2;

    return amount * discount / 100;
}

float calculateFinalBill(float amount)
{
    float tax, shipping = 0;

    tax = amount * 15 / 100;

    if (amount <= 5000)
        shipping = 300;

    return amount + tax + shipping;
}

int main()
{
    float amount, discount, finalAmount, bill;
    char type;

    printf("Enter amount: ");
    scanf("%f", &amount);

    printf("Enter membership (P/G/S): ");
    scanf(" %c", &type);

    discount = calculateDiscount(amount, type);

    finalAmount = amount - discount;

    bill = calculateFinalBill(finalAmount);

    printf("Discount = %.2f\n", discount);
    printf("Final Bill = %.2f\n", bill);

    return 0;
}


