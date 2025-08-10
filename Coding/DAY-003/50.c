#include <stdio.h>
void count_total_digits();
int main(){
    count_total_digits();
    return 0;
}

void count_total_digits(){
   
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        count++;
        num/=10;
    }
    printf("Number of digits in the number is: %d\n", count);
    
}