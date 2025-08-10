#include <stdio.h>
int disp_sum_all_digits(){
    int sum = 0;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main(){
    int total_sum = disp_sum_all_digits();
    printf("%d\n", total_sum);
    return 0;
}