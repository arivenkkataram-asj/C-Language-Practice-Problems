#include <stdio.h>

void getnumbers(int *number1,int *num2){
    printf("Enter two numbers : ");
    scanf("%d %d", number1,num2);
}

void addnumbers(int num1,int num2,int *result){
    *result=num1+num2;
}

int main(){
    int number1,number2,result;
    getnumbers(&number1,&number2);
    addnumbers(number1,number2,&result);
    printf("The Sum is : %d", result);
    return 0;
}