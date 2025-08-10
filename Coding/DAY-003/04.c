#include <stdio.h>

int main(){
    for(int i=9999;i>=1000;i--){
        if(i%7 == 0 && i%9 == 0){
            printf("The largest 4-digit number divisible by both 7 and 9 is: %d\n", i);
            break;
        }
    }
    return 0;
}