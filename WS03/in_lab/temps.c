//==============================================
// Name:           Yujin Won
// Student Number: 153565197
// Email:          ywon9@myseneca.ca
// Section:        NGG
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>
#define NUMS 3 

int main(void)
{
    int i;
    int high;
    int low;
    double day_average;
    double average = 0;

    printf("---=== IPC Temperature Analyzer ===---\n");

    for (i = 0; i < NUMS; i++)
    {
        
        printf("Enter the high value for day %d: ", i + 1);
        scanf("%d", &high);

        printf("\n");

        printf("Enter the low value for day %d: ", i + 1);
        scanf("%d", &low);

        printf("\n");


        while (41 <= high || low <= -41 || high < low)
        {

            printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");

            printf("\n");

            printf("Enter the high value for day %d: ", i + 1);
            scanf("%d", &high);

            printf("\n");

            printf("Enter the low value for day %d: ", i + 1);
            scanf("%d", &low);

            printf("\n");

        }


        day_average = (high + low) / 2.0;
        average = (average * i + day_average) / (i + 1);

    }


    printf("The average (mean) temperature was: %.2lf\n", average);

    return 0;

}