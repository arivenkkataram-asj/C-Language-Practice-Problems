#include <stdio.h>
int disp_single_digit_prime();
int main(){
    disp_single_digit_prime();
    return 0;
}

int disp_single_digit_prime(){
   int num,count_prime=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        int digit = num %10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            count_prime++;
        }
        num /= 10;
    }
    printf("Number of prime digits in the number is: %d\n", count_prime);
    return 0;
    
}