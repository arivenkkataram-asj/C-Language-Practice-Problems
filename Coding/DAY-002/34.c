#include<stdio.h>
int main(){
    int i=6,sum=0;
    loop: if(i>=1){
        sum+=i;
        i--;
        goto loop;
    }
    printf("Sum: %d\n", sum);
    return 0;
}