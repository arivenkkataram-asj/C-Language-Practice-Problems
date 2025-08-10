#include <stdio.h>
int disp_2digit_ones5(){
    int sum = 0;
    for(int i=10; i<=99; i++){
        if(i % 10 == 5){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int y = disp_2digit_ones5();
    printf("The sum of all 2-digit numbers with 5 in the ones place is: %d\n", y);
    return 0;
}