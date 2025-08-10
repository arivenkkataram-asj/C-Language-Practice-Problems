#include <stdio.h>

int disp_HCF2(){
    int num1,num2,i=1,HCF=1;
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);
    while(i<=num1&&i<=num2){
        if(num1%i == 0 && num2%i == 0){
            HCF = i;
        }
        i++;
    }
    return HCF;  
}

int main(){
    int hcf = disp_HCF2();
    printf("The HCF of the two numbers is: %d\n", hcf);
    return 0;
}