#include <stdio.h>
int disp_double_digit_square();
int main(){ 
    disp_double_digit_square();
    return 0;   
}

int disp_double_digit_square(){
   int num,count_perfect_square=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>=10){
        int digit = num % 100;
        if (digit == 16 || digit == 25 || digit == 36 || digit == 49 || digit == 64 || digit == 81) {
            count_perfect_square++;
        }
        num /= 10;
    }
    printf("Number of perfect square digits in the number is: %d\n", count_perfect_square);
    return 0; 
    
}