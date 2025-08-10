#include <stdio.h>

int main(){
    int sum = 0, i = 1;
    while (i<=5){
        sum += i;
        i++;
    }
    printf("Sum of first 5 natural numbers is: %d\n", sum);
    return 0;
}