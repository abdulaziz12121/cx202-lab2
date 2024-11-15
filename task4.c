#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 18;  
    } else if (units <= 200) {
        bill = 1800 + (units - 100) * 18;  
    } else if (units <= 250) {
        bill = 3600 + (units - 200) * 30;  
    } else if (units <= 350) {
        bill = 7500 + (units - 250) * 30;  
    } else if (units <= 400) {
        bill = 10500 + (units - 350) * 40;  
    } else if (units <= 500) {
        bill = 16000 + (units - 400) * 60;  
    } else {
        bill = 30000 + (units - 500) * 60;  
    }

    printf("The electricity bill is: %d PKR\n", bill);

    return 0;
}

