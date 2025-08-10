#include <stdio.h>
void disp_2digit_odd_below20();
int main(){
    disp_2digit_odd_below20();
    return 0;
}

void disp_2digit_odd_below20(){
    int i=10;
    while(i<20){
        if(i%2 == 1)
        printf("%d\n", i);
        i++;
    }
}