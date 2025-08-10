#include <stdio.h>
int main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        count++;
        num/=10;
    }
    printf("Number of digits in the number is: %d\n", count);
    return 0;
}