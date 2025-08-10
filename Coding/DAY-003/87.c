#include <stdio.h>

int disp_LCM2(){
   int num1,num2,i=1;
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);
    while(i<=num1*num2){
        if(i%num1 == 0 && i%num2 == 0){
            return i;
            break;
        }
        i++;
    }
    return 0;
    
}

int main(){
    int lcm = disp_LCM2();
    printf("The LCM is: %d\n", lcm);
    return 0;
}