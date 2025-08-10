#include <stdio.h>

int main(){
    int num,digit,count_perfect_square = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  
    for(int i=num;i>=10;i/=10){
        digit = i % 100;
        if(digit == 16 || digit == 25 || digit == 36 || digit == 49 || digit == 64 || digit == 81){
            count_perfect_square++;
        }
    }
    printf("The number of perfect square digits in %d is: %d\n", num, count_perfect_square);
    return 0;
}