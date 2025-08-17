#include <stdio.h>

int main() {
    unsigned char digit;   // input number (0–15)
    char num_bin[4];       // store digits 0 or 1
    char i = 3;

    printf("Enter a number (0–15): ");
    scanf("%hhu", &digit);

    // fill from rightmost bit
    while (i >= 0) {
        num_bin[i] = digit % 2;  // store 0 or 1 (as number, not char)
        digit /= 2;
        i--;
    }

    printf("The number in 4-bit binary is: ");
    for (char j = 0; j < 4; j++) {
        printf("%d", num_bin[j]);   // print as number
    }
    printf("\n");

    return 0;
}
