#include <stdio.h>

int main(){
    printf("Input : ");
    int a,b,sum;
    scanf("%d", &a);
    sum = (a/100 + a/10%10 + a%10 );
    while(sum >= 10){
        b=sum;
        sum = ( b/10 + b%10);
    } 
    printf("Output : %d\n", sum);
    return 0;
}