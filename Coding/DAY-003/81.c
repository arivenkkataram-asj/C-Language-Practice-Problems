#include <stdio.h>

int disp_total_2digit_odd(){
    int num, count_odd = 0;
    printf("Enter a number: "); 
    scanf("%d", &num);
    while(num>=10){
        if(num % 100 % 2 == 1 ){
            count_odd++;
        }
        num /= 10;
    }
    return count_odd--;
}

int main(){
    int count = disp_total_2digit_odd();
    printf("Number of 2-digit odd numbers in the number is: %d\n", count);
    return 0;
}