#include <stdio.h>
int disp_LCM3();
int main(){
    disp_LCM3();
    return 0;
}

int disp_LCM3(){
    int num1,num2,num3,i=1;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    while(i<= num1 * num2 * num3){
        if(i % num1 == 0 && i % num2 == 0 && i % num3 == 0){
            printf("The LCM of %d, %d and %d is: %d\n", num1, num2, num3, i);
            break;
        }
        i++;
    }
    return 0;
    
}