#include <stdio.h>
int main(){
    int num,count_odd=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        if(num%10 % 2 == 1){
            count_odd++;
        }
        num/=10;
    }
    printf("Number of odd digits in the number is: %d\n", count_odd);
    return 0;
}