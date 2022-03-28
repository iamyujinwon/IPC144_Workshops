//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       4 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Place your code below

#include <stdio.h>
#define MAX_DAYS 10

int main(void)
{
	int i;
	int number_days;
	int high[MAX_DAYS];
	int low[MAX_DAYS];
	int highest_value = -10;
	int lowest_value = 10;
	int highest_day = 0;
	int lowest_day = 0;
	int day_temperature = 1;
	double day_average;
	double average = 0;
	double total_average[MAX_DAYS];

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


	for (i = 0; i < number_days; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);

		day_average = (high[i] + low[i]) / 2.0;
		average = (average * i + day_average) / (i + 1);
		total_average[i] = average;
	}

	printf("\n");

	printf("%-5s%-4s%-3s\n", "Day", "Hi", "Low");

	for (i = 0; i < number_days; i++)
	{
		printf("%-5d%-4d%3d\n", i + 1, high[i], low[i]);
	}


	for (i = 0; i < number_days; i++)
	{
		if (highest_value < high[i])
		{
			highest_value = high[i];
			highest_day = i + 1;
		}

		if (lowest_value > low[i])
		{
			lowest_value = low[i];
			lowest_day = i + 1;
		}

	}

	printf("\n");

	printf("The highest temperature was %d, on day %d\n", highest_value, highest_day);

	printf("The lowest temperature was %d, on day %d\n", lowest_value, lowest_day);

	printf("\n");

	while (0 <= day_temperature)
	{
		if (day_temperature < 1 || day_temperature > 5)
		{
			printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", number_days);
		}

		else 
		{
			printf("Enter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", number_days);
		}

		scanf("%d", &day_temperature);


		printf("\n");

		if (day_temperature < 0)
		{
			printf("Goodbye!\n");
			break;
		}
			
		if ( 1 <= day_temperature &&  day_temperature <= 5)
		{
			printf("The average temperature up to day %d is: %.2lf\n", day_temperature, total_average[day_temperature - 1]);
			printf("\n");
		}

	}
	

	return 0;
}