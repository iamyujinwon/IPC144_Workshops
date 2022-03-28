//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       4 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>
#define MAX_DAYS 10

int main(void)
{
	int i;
	int number_days;
	int high[MAX_DAYS];
	int low[MAX_DAYS];


	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &number_days);

	printf("\n");

	while (number_days < 3 || number_days > 10)
	{
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &number_days);
		printf("\n");
	}


	for(i = 0; i < number_days; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);

		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]); 
	}
	
	printf("\n");

	printf("%-5s%-4s%-3s\n", "Day", "Hi", "Low");

	for (i = 0; i < number_days; i++)
	{
		printf("%-5d%-4d%3d\n", i + 1, high[i], low[i]);
	}
	return 0;
}


