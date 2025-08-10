#include <stdio.h>
int main(){
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        rev=rev*10+num%10;
        num/=10;
    }
    printf("rev of digits in the number is: %d\n", rev);
    return 0;
}