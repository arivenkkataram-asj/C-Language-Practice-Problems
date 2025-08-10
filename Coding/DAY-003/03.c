#include <stdio.h>

int main(){
    int num,digit,count_perfect_square = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  
    for(int i=num;i>0;i/=10){
        digit = i % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7){
            count_perfect_square++;
        }
    }
    printf("The number of prime digits in %d is: %d\n", num, count_perfect_square);
    return 0;
}