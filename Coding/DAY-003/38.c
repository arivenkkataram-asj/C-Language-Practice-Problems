#include<stdio.h>

int main(){
    int num1,num2,i=1,HCF=1;
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);
    while(i<=num1&&i<=num2){
        if(num1%i == 0 && num2%i == 0){
            HCF = i;
        }
        i++;
    }
    printf("The HCF of %d and %d is: %d\n", num1, num2, HCF);
    return 0;
}