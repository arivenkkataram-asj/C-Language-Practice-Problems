#include <stdio.h>
void disp_sum6();
int main(){
    disp_sum6();
    return 0;
}

void disp_sum6(){
    int sum = 0, i = 6;
    while(i>0){
        sum += i;
        i--;
    }
    printf("Sum of first 6 natural numbers is: %d\n", sum);
}