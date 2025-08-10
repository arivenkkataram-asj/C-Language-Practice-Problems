#include <stdio.h>

int disp_biggest_4digit_div7_9(){
   int i=9999;
    while(i>=1000){
        if(i%7 == 0 && i%9 == 0){
            return i;           
        }
        i--;
    }
    
}

int main(){
    int result = disp_biggest_4digit_div7_9();
    printf("The biggest 4-digit number divisible by both 7 and 9 is: %d\n", result);
    return 0;
}