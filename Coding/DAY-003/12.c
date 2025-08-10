#include <stdio.h>

int main(){
    int sum = 0, i = 6;
    while(i>0){
        sum += i;
        i--;
    }
    printf("Sum of first 6 natural numbers is: %d\n", sum);
    return 0;
}