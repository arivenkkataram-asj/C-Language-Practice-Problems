#include <stdio.h>
void disp_2digit_odd_sum7();
int main(){
    disp_2digit_odd_sum7();
    return 0;
}

void disp_2digit_odd_sum7(){
    int i=10;
    while (i<100){
        if(i%2 == 1)
        if(i/10+i%10 == 7){
            printf("%d, ", i);
        }
        i++;
    }
}