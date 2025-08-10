#include <stdio.h>
int disp_rsum(){
    int sum = 0;
    for(int i=6; i>=0; i--){
        sum += i;
    }
    return sum;
}
int main(){
    int y=disp_rsum();
    printf("The sum of the first 5 natural numbers is: %d\n", y);
}