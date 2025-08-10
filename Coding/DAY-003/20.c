#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        sum+=num%10;
        num/=10;
    }
    printf("sum of digits in the number is: %d\n", sum);
    return 0;
}