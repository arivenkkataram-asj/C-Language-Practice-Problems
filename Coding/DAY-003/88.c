#include <stdio.h>

int disp_LCM3(){
    int num1,num2,num3,i=1;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    while(i<= num1 * num2 * num3){
        if(i % num1 == 0 && i % num2 == 0 && i % num3 == 0){
            return i;
            break;
        }
        i++;
    }
    return 0;
    
}

int main(){
    int lcm = disp_LCM3();
    printf("The LCM of the three numbers is: %d\n", lcm);
    return 0;
}
