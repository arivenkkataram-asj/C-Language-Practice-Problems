#include <stdio.h>

int main(){
    int i=11;
    loop: if(i<=100){
        if(i%2 == 1){
            if(i/10+i%10 == 7){
                printf("%d\n", i);
            }
            i++;
        }
        else i++;
        goto loop;
    }
        return 0;
}