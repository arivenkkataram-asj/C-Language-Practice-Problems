#include <stdio.h>

int disp_total_2digit_odd(){
   int num,count_perfect_square=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        int digit = num % 10;
        if (digit == 0 || digit == 1 || digit == 4 || digit == 9) {
            count_perfect_square++;
        }
        num /= 10;
    }
    return count_perfect_square;
}

int main(){
    int count = disp_total_2digit_odd();
    printf("Number of perfect square digits in the number is: %d\n", count);
    return 0;
}   