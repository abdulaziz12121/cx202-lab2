#include <stdio.h>

int main() {

    printf("Please enter the grade: ");
    int num;
    scanf("%d", &num);

    if (num >= 73) {
        printf("Congrats! You got an A grade\n");

    } else if (num >= 68 && num < 73) {
        printf("You got a B+ grade\n");

    } else if (num >= 63 && num < 68) {
        printf("You got a B grade\n");

    } else if (num >= 58 && num < 63) {
        printf("You got a C+ grade\n");

    } else if (num >= 52 && num < 58) {
        printf("You got a C grade\n");

    } else if (num >= 47 && num < 52) {
        printf("You got a D+ grade\n");

    } else if (num >= 41 && num < 47) {
        printf("You got a D grade\n");

    } else if (num < 41) {
        printf("You got an F grade\n");
    }

    return 0;
}

