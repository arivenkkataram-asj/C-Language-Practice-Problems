#include <stdio.h>

int main(){
    int num1,num2,num3,LCM=0;
    printf("Enter three numbers: ");    
    scanf("%d %d %d", &num1, &num2, &num3);
    for(int i=1;i<=num1*num2*num3;i++){
        if(i%num1 == 0 && i%num2 == 0 && i%num3 == 0){
            LCM = i;
            break;
        }
    }
    printf("The LCM of %d, %d and %d is: %d\n", num1, num2, num3, LCM);
    return 0;
}