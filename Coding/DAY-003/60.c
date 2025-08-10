#include <stdio.h>
void disp_total_odd_digits();
int main(){
    disp_total_odd_digits();
    return 0;
}

void disp_total_odd_digits(){
   int num,count_odd=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>=10){
        if(num%10 % 2 == 1){
            count_odd++;
        }
        num/=10;
    }
    printf("Number of odd digits in the number is: %d\n", count_odd-1);
    
    
}