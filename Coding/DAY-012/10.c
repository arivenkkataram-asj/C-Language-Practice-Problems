#include <stdio.h>

void getnumbers(int *number1,int *num2){
    printf("Enter two numbers : ");
    scanf("%d %d", number1,num2);
}

void multinumbers(int num1,int num2,int *result){
    *result=num1*num2;
}

int main(){
    int number1,number2,result;
    getnumbers(&number1,&number2);
    multinumbers(number1,number2,&result);
    printf("The Multiply is : %d", result);
    return 0;
}