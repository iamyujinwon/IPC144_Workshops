//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       2 (at_home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:

#include <stdio.h>

int main(void)
{
	double amount;

	printf("Please enter the amount to be paid: $");
	scanf_s("%lf", &amount);
	int cents = amount * 100;

	double gst = amount * 0.13 + 0.005;
	int GST = gst * 100;

	printf("GST: %.2lf\n", gst);

	int change = cents + GST;
	double balance_owing = change / 100.0;
	printf("Balance owing: $%.2lf\n", balance_owing);

	int loonies = change / 100;
	int loonies_balance_owing = change - loonies * 100;
	double loonies_balance = loonies_balance_owing / 100.0;

	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, loonies_balance);

	int quratersreq = loonies_balance_owing / 25;
	double quarters_balance = loonies_balance_owing % 25 / 100.0;

	printf("Quarters required: %d, balance owing $%.2lf\n", quratersreq, quarters_balance);

	int quarters = quarters_balance * 100;
	int dimesreq = quarters / 10;
	double dimes_balance = quarters % 10 / 100.0;
	printf("Dimes required: %d, balance owing $%.2lf\n", dimesreq, dimes_balance);


	int dimes = dimes_balance * 100;
	int nicklesreq = dimes / 5;
	double nickles_balance = dimes % 5 / 100.0;
	printf("Nickels required: %d, balance owing $%.2lf\n", nicklesreq, nickles_balance);

	int pennies = nickles_balance * 100;
	int penniesreq = pennies / 1;
	double pennies_balance = pennies % 1 / 100.0;
	printf("Pennies required: %d, balance owing $%.2lf\n", penniesreq, pennies_balance);


	return 0;
}
