#include <stdio.h>

int disp_total_odd_digits(){
   int num,count_odd=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        if(num%10 % 2 == 1){
            count_odd++;
        }
        num/=10;
    }
    return count_odd;
}
int main(){
    int count = disp_total_odd_digits();
    printf("Number of odd digits in the number is: %d\n", count);
    return 0;
}