#include <stdio.h>

int main(){
    for(int i=10;i<100;i++){
        if(i%2 !=0){
            if(i/10+i%10 == 7){
                printf("%d \n", i);
            }
        }
    }
    return 0;
}