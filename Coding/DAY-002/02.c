#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num = num/100 * 100 + num%10;
    printf("Output: %d\n", num);
    return 0;
}