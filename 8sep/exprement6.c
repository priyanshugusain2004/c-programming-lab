#include <stdio.h>

int main()
{
    char name[50];
    float price1, price2, price3;
    int qty1, qty2, qty3;
    float amount1, amount2, amount3;
    float subtotal, discountRate, discount, afterDiscount, gst, finalBill;

    const float GST = 0.18;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Item 1 Price: ");
    scanf("%f", &price1);
    printf("Enter Item 1 Quantity: ");
    scanf("%d", &qty1);

    printf("Enter Item 2 Price: ");
    scanf("%f", &price2);
    printf("Enter Item 2 Quantity: ");
    scanf("%d", &qty2);

    printf("Enter Item 3 Price: ");
    scanf("%f", &price3);
    printf("Enter Item 3 Quantity: ");
    scanf("%d", &qty3);

    amount1 = price1 * qty1;
    amount2 = price2 * qty2;
    amount3 = price3 * qty3;

    subtotal = amount1 + amount2 + amount3;

    discountRate = subtotal >= 10000 ? 0.15 :
                   subtotal >= 5000 ? 0.10 :
                   subtotal >= 1000 ? 0.05 : 0.00;

    discount = subtotal * discountRate;
    afterDiscount = subtotal - discount;
    gst = afterDiscount * GST;
    finalBill = afterDiscount + gst;

    printf("\n=============================================\n");
    printf("              SHOPPING INVOICE\n");
    printf("=============================================\n");
    printf("Customer Name : %s\n\n", name);

    printf("Item        Price       Quantity       Amount\n");
    printf("---------------------------------------------\n");
    printf("Item 1      %.2f         %d          %.2f\n", price1, qty1, amount1);
    printf("Item 2      %.2f         %d          %.2f\n", price2, qty2, amount2);
    printf("Item 3      %.2f         %d          %.2f\n", price3, qty3, amount3);
    printf("---------------------------------------------\n");

    printf("Subtotal                             %.2f\n", subtotal);
    printf("Discount (%.0f%%)                       %.2f\n", discountRate * 100, discount);
    printf("---------------------------------------------\n");
    printf("Amount After Discount               %.2f\n", afterDiscount);
    printf("GST (18%%)                            %.2f\n", gst);
    printf("---------------------------------------------\n");
    printf("FINAL BILL                          %.2f\n", finalBill);
    printf("=============================================\n");

    return 0;
}
