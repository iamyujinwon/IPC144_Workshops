//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include <stdio.h>

int main(void)
{
	double amount;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	int cents = amount * 100;

	int loonies = cents / 100;
	int l_balanceowing = cents - loonies * 100;
	double n_balanceowing = l_balanceowing / 100.0;

	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, n_balanceowing);

	int quartersreq = l_balanceowing / 25;
	double quarterchange = l_balanceowing % 25 / 100.0;

	printf("Quarters required: %d, balance owing $%.2lf\n", quartersreq, quarterchange);

	return 0;
}