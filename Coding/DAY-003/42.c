#include <stdio.h>
void disp_sum();
int main(){
    disp_sum();
    return 0;
}

void disp_sum(){
    int sum = 0, i = 1;
    while (i<=5){
        sum += i;
        i++;
    }
    printf("Sum of first 5 natural numbers is: %d\n", sum);
    
}