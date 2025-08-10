#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num <= 100 && num >= 10) && printf("Output: %d\n", num/10 + num%10);
}