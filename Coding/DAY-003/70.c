#include <stdio.h>
int sum(){
    int sum = 0;
    for(int i=1;i<=5;i++){
        sum += i;
    }
    return sum;
}
int main(){
    printf("The sum of the first 5 natural numbers is: %d\n", sum());
}