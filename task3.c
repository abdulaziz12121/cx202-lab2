#include <stdio.h>

int main() {

    printf("Please enter the distance from source to destination (Km): ");
    int num;
    char transport;
    float time = 0;

    scanf("%d", &num);

    printf("Please enter the transport mean ('W' for walking, 'C' for car, 'B' for bicycle): ");
    scanf(" %c", &transport);  // Add a space before %c to ignore any leftover newline character

    if (transport == 'W' || transport == 'w') {
        time = num / 5.0;
        printf("Estimated time (by walking): %f hours\n", time);

    } else if (transport == 'B' || transport == 'b') {
        time = num / 18.0;
        printf("Estimated time (by bicycle): %f hours\n", time);

    } else if (transport == 'C' || transport == 'c') {
        time = num / 60.0;
        printf("Estimated time (by car): %f hours\n", time);

    } 

    return 0;
}

