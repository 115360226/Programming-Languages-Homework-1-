#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    float weight, height, bmi;

    do {
        printf("Select calculation system:\n");
        printf("1. Metric (Kilograms, Meters)\n");
        printf("2. Imperial (Pounds, Inches)\n");
        printf("Enter choice (1 or 2): ");
        scanf_s("%d", &choice);

        if (choice != 1 && choice != 2) {
            printf("Invalid choice! Please try again.\n\n");
        }
    } while (choice != 1 && choice != 2);

    if (choice == 1) {
        printf("\nEnter weight in kilograms(ex:70): ");
        scanf_s("%f", &weight);
        printf("Enter height in meters (ex:1.75): ");
        scanf_s("%f", &height);

        bmi = weight / (height * height);
    }
    else {
        printf("\nEnter weight in pounds: ");
        scanf_s("%f", &weight);

        printf("Enter height in inches: ");
        scanf_s("%f", &height);

        bmi = (weight * 703) / (height * height);
    }

    printf("\nYour Body Mass Index (BMI) is: %.1f\n\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}