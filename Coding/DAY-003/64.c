#include <stdio.h>
int disp_biggest_4digit_div7_9();
int main(){
    disp_biggest_4digit_div7_9();
    return 0;
}

int disp_biggest_4digit_div7_9(){
   int i=9999;
    while(i>=1000){
        if(i%7 == 0 && i%9 == 0){
            printf("%d\n", i);
            break; 
        }
        i--;
    }
    
}