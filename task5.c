#include <stdio.h>

int main() {
    int age, pizzas;
    char exercise;

    // Input: Age, weekly pizza intake, and daily morning exercise status
    printf("Please enter the age of the person (years): ");
    scanf("%d", &age);

    printf("Please enter how many pizzas they eat per week: ");
    scanf("%d", &pizzas);

    printf("Please mention whether they exercise daily in the morning (Y/N): ");
    scanf(" %c", &exercise);

    // Classification using if-else conditions
    if (( pizzas >= 5) || (age >= 40 && pizzas <= 3 && exercise == 'N') || (age >= 35 && pizzas >= 1 && exercise == 'N')){ 

        printf("The person is 'Unfit'\n");
    } 
    else if ((age == 40 && pizzas <= 3 && exercise == 'Y') || (age == 20 && pizzas <= 2 && exercise == 'N') || (age <= 30 && pizzas <= 1 && exercise == 'N')) {
        printf("The person is 'Fit'\n");
    } 
    else {
        printf("The fitness classification is not defined for these inputs.\n");
    }

    return 0;
}

