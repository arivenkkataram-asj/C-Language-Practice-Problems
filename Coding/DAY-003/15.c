#include <stdio.h>

int main(){
    int i=10;
    while (i<100){
        if(i%2 == 1)
        if(i/10+i%10 == 7){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}