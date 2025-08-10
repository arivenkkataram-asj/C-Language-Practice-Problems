#include<stdio.h>

int main(){
    int num1,num2,i=1;
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);
    while(i<=num1*num2){
        if(i%num1 == 0 && i%num2 == 0){
            printf("The LCM of %d and %d is: %d\n", num1, num2, i);
            break;
        }
        i++;
    }
    return 0;
}