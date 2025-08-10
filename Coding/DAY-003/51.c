#include <stdio.h>
void disp_sum_all_digits();
int main(){
    disp_sum_all_digits();
    return 0;
}

void disp_sum_all_digits(){
   
     int num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        sum+=num%10;
        num/=10;
    }
    printf("sum of digits in the number is: %d\n", sum);
   
}