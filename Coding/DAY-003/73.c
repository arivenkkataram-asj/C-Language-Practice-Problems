#include <stdio.h>
int disp_2digit_odd_sum_tens7(){
    int sum = 0;
    for(int i = 10; i <= 99; i++){
        if(i % 2 != 0 && (i / 10) == 7){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int y=disp_2digit_odd_sum_tens7();
    printf("%d\n", y);
}