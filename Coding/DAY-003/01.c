#include <stdio.h>

int main(){
    int num,digit,count_perfect_square = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  
    for(int i=num;i>0;i/=10){
        digit = i % 10;
        if(digit == 0 || digit == 1 || digit == 4 || digit == 9){
            count_perfect_square++;
        }
    }
    printf("The number of perfect square digits in %d is: %d\n", num, count_perfect_square);
    return 0;
}