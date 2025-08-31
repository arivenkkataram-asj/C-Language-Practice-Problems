#include <stdio.h>

void find_2digit_odd_sum7(){
    int num;
    int *i=&num;
    for( *i=10;*i<100;(*i)++){
        if(*i%2 !=0){
            if(*i/10+*i%10 == 7){
                printf("%d \n", *i);
            }
        }
    }
}

int main(){
    
    find_2digit_odd_sum7();
    return 0;
}