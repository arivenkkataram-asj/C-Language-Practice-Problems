#include <stdio.h>

int  rev_digits(){
   
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        rev=rev*10+num%10;
        num/=10;
    }
    return rev;
}

int main(){
    int reversed_number = rev_digits();
    printf("Reversed number is: %d\n", reversed_number);
    return 0;
}