#include <stdio.h>

int main(){
    int i=10;
    while (i<100){
        if(i%2 == 0)
        if(i/10+i%10 == 6){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}