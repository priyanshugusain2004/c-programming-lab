#include <stdio.h>



int main()
{
    int consumerNumber;
    char consumerName[50];
    int units;

    double energyCharge;
    double electricityDuty;
    double finalBill;

    printf("Enter Consumer Number: ");
    scanf("%d", &consumerNumber);

    printf("Enter Consumer Name: ");
    scanf(" %[^\n]", consumerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    
    if (units <= 100)
    {
        energyCharge = units * RATE1;
    }
    else if (units <= 200)
    {
        energyCharge = (100 * RATE1)
                     + ((units - 100) * RATE2);
    }
    else if (units <= 400)
    {
        energyCharge = (100 * RATE1)
                     + (100 * RATE2)
                     + ((units - 200) * RATE3);
    }
    else
    {
        energyCharge = (100 * RATE1)
                     + (100 * RATE2)
                     + (200 * RATE3)
                     + ((units - 400) * RATE4);
    }


    electricityDuty = energyCharge * 5.0 / 100.0;
    finalBill = energyCharge + FIXED_CHARGE + electricityDuty;

    printf("\n========== ELECTRICITY BILL ==========\n");
    printf("Consumer Number   : %d\n", consumerNumber);
    printf("Consumer Name     : %s\n", consumerName);
    printf("Units Consumed    : %d\n", units);
    printf("Energy Charge     : Rs. %.2f\n", energyCharge);
    printf("Fixed Charge      : Rs. %.2f\n", FIXED_CHARGE);
    printf("Electricity Duty  : Rs. %.2f\n", electricityDuty);
    printf("Final Bill        : Rs. %.2f\n", finalBill);

    
    printf("Consumption      : %s\n",
           (units > 400) ? "HIGH CONSUMPTION" : "NORMAL CONSUMPTION");

    printf("======================================\n");

    return 0;
}
