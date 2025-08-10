#include <stdio.h>
void rev_digits();
int main(){
    rev_digits();
    return 0;
}

void rev_digits(){
   
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        rev=rev*10+num%10;
        num/=10;
    }
    printf("rev of digits in the number is: %d\n", rev);
   
}