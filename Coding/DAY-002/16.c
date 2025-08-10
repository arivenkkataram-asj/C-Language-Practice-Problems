#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    ((num/10 >= num%10)&& num<100)?printf("1"):printf("0");
    return 0;
}