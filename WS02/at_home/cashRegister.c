//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       2 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications

#include <stdio.h>

int main(void)
{
	double amount;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	int cent_amount = amount * 100;

	double gst = amount * 0.13 + 0.005;
	int cent_gst = gst * 100;

	printf("GST: %.2lf\n", gst);

	int cent_change = cent_amount + cent_gst;
	double balance_owing = cent_change / 100.0;
	printf("Balance owing: $%.2lf\n", balance_owing);

	int loonies = cent_change / 100;
	int cent_loonies_balance_owing = cent_change - loonies * 100;
	double loonies_balance = cent_loonies_balance_owing / 100.0;

	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, loonies_balance);

	int quartersreq = cent_loonies_balance_owing / 25;
	double quarters_balance = cent_loonies_balance_owing % 25 / 100.0;

	printf("Quarters required: %d, balance owing $%.2lf\n", quartersreq, quarters_balance);

	int cents_remainingbalance = quarters_balance * 100;
	int dimesreq = cents_remainingbalance / 10;
	double dimes_balance = cents_remainingbalance % 10 / 100.0;
	printf("Dimes required: %d, balance owing $%.2lf\n", dimesreq, dimes_balance);

	cents_remainingbalance = dimes_balance * 100;
	int nicklesreq = cents_remainingbalance / 5;
	double nickles_balance = cents_remainingbalance % 5 / 100.0;
	printf("Nickels required: %d, balance owing $%.2lf\n", nicklesreq, nickles_balance);

	cents_remainingbalance = nickles_balance * 100;
	int penniesreq = cents_remainingbalance / 1;
	double pennies_balance = cents_remainingbalance % 1 / 100.0;
	printf("Pennies required: %d, balance owing $%.2lf\n", penniesreq, pennies_balance);


	return 0;
}