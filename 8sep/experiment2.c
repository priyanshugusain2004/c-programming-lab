#include <stdio.h>

int main()
{
    int consumerNo, units;
    char name[50];
    float energy, duty, bill;
    const float fixed = 100.0;

    printf("Enter Consumer Number: ");
    scanf("%d", &consumerNo);

    printf("Enter Consumer Name: ");
    scanf("%s", name);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        energy = units * 2.50;
    else if (units <= 200)
        energy = 100 * 2.50 + (units - 100) * 4.00;
    else if (units <= 400)
        energy = 100 * 2.50 + 100 * 4.00 + (units - 200) * 5.50;
    else
        energy = 100 * 2.50 + 100 * 4.00 + 200 * 5.50 + (units - 400) * 7.00;

    duty = energy * 0.05;
    bill = energy + fixed + duty;

    printf("\n========================================\n");
    printf("          ELECTRICITY BILL\n");
    printf("========================================\n");
    printf("Consumer Number : %d\n", consumerNo);
    printf("Consumer Name   : %s\n", name);
    printf("Units Consumed  : %d\n", units);
    printf("Energy Charge   : %.2f\n", energy);
    printf("Fixed Charge    : %.2f\n", fixed);
    printf("Electricity Duty: %.2f\n", duty);
    printf("Final Bill      : %.2f\n", bill);
    printf("Consumption     : %s\n", units > 400 ? "HIGH CONSUMPTION" : "NORMAL CONSUMPTION");
    printf("========================================\n");

    return 0;
}
