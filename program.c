
#include <stdio.h>

int main()
{
 float purchase, discount, afterDiscount,delivery, finalAmount, rate, distance;
int customer;

printf("Enter purchase amount: ");
scanf("%f", &purchase);

printf("Enter customer type (1=Student, 2=Regular): ");
scanf("%d", &customer);

printf("Enter delivery distance in km: ");
scanf("%f", &distance);

 if (customer == 1)
    {
      if (purchase >= 2000)
            rate = 15;
        else
            rate = 10;
    }
    else
 if (customer == 2)
    {
        if (purchase >= 3000)
            rate = 8;
        else
            rate = 0;
    }
    else
    {
        printf("Invalid customer type!\n");
        rate = -1;
    }

    if (rate != -1)
    {
 discount = purchase * rate / 100;
 afterDiscount = purchase - discount;

        if (distance <= 5)
            delivery = 40;
        else 
        if (distance <= 15)
            delivery = 70;
        else
            delivery = 100;

finalAmount = afterDiscount + delivery;

 printf("\n--- SMARTCART BILL ---\n");
 printf("Purchase Amount: Rs. %.2f\n", purchase);
 printf("Discount Amount: Rs. %.2f\n", discount);
 printf("Amount After Discount: Rs. %.2f\n", afterDiscount);
 printf("Delivery Charge: Rs. %.2f\n", delivery);
 printf("Final Payable Amount: Rs. %.2f\n", finalAmount);
    }

    return 0;
}

