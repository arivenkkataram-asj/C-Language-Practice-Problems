#include <stdio.h>

int main(){
    int i=1;
    loop: if(i<=9){if(i%2 == 1){
        printf("%d\n", i);
        i++;}
        else{i++;}
        goto loop;}
        return 0;
}