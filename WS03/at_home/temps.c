//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       3 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>
#define NUMS 4 
#define HIGH_TEMP_LIMIT 40
#define LOW_TEMP_LIMIT -40

int main(void)
{
    int i;
    int high, low;
    double mean_high = 0;
    double  mean_low = 0;
    int highest_temperature = LOW_TEMP_LIMIT;
    int lowest_temperature = HIGH_TEMP_LIMIT;
    int highest_day = 0;
    int lowest_day = 0;
    int total_high = 0;
    int total_low = 0;
    double total_average;

    printf("---=== IPC Temperature Analyzer ===---\n");

    for (i = 0; i < NUMS; i++)
    {

        printf("Enter the high value for day %d: ", i + 1);
        scanf("%d", &high);
          
        printf("\n");

        printf("Enter the low value for day %d: ", i + 1);
        scanf("%d", &low);

        printf("\n");


        while (HIGH_TEMP_LIMIT < high || low < LOW_TEMP_LIMIT || high < low)
        {

            printf("Incorrect values, temperatures must be in the range %d to %d, high must be greater than low.\n", LOW_TEMP_LIMIT, HIGH_TEMP_LIMIT);

            printf("\n");

            printf("Enter the high value for day %d: ", i + 1);
            scanf("%d", &high);

            printf("\n");

            printf("Enter the low value for day %d: ", i + 1);
            scanf("%d", &low);


            printf("\n");
        }

        if (highest_temperature < high)
        {
            highest_temperature = high;
            highest_day = i + 1;
        }

        if (lowest_temperature > low)
        {
            lowest_temperature = low;
            lowest_day = i + 1;
        }

        total_high = total_high + high;
        total_low = total_low + low;
    }

    
    total_average = (total_high + total_low) / ((double)NUMS * 2);
    mean_high = total_high / (double)NUMS;
    mean_low = total_low / (double)NUMS;
    
    printf("The average (mean) LOW temperature was: %.2lf\n", mean_low);
    printf("The average (mean) HIGH temperature was: %.2lf\n", mean_high);
    printf("The average (mean) temperature was: %.2lf\n", total_average);
    printf("The highest temperature was %d, on day %d\n", highest_temperature, highest_day);
    printf("The lowest temperature was %d, on day %d\n", lowest_temperature, lowest_day);
    

    return 0;
}

