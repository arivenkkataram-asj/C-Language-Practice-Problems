#include <stdio.h>

int main(){
    int sum=0;
    for(int i=6;i>=1;i--){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}