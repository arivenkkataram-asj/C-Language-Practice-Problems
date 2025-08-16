#include <stdio.h>
#define DIGITS 50

int main() {
    int A[DIGITS] = {0};  
    int B[DIGITS] = {0};  
    int C[DIGITS + 1] = {0}; 


    for (int i = 0; i < DIGITS; i++) A[i] = 9;
    B[DIGITS - 1] = 1;

    int carry = 0;
    for (int i = DIGITS - 1; i >= 0; i--) {
        int sum = A[i] + B[i] + carry;
        C[i + 1] = sum % 10;
        carry = sum / 10;
    }
    C[0] = carry; 

    for (int i = 0; i < DIGITS + 1; i++) {
        printf("%d\n", C[i]);
    }
    printf("\n");
    return 0;
}
