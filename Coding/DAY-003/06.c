#include <stdio.h>

int main(){
    int num1,num2,LCM=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for(int i=1;i<=num1*num2;i++){
        if(i%num1 == 0 && i%num2 == 0){
            LCM = i;
            break;
        }
    }
    printf("The LCM of %d and %d is: %d\n", num1, num2, LCM);
    return 0;
}