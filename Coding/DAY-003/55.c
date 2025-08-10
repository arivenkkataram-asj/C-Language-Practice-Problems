#include <stdio.h>
void check_prime_and_sum14();
int main(){
    check_prime_and_sum14();
    return 0;
}

void check_prime_and_sum14(){
   
    int num,prime=1,sum=0,checksum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i=2;
    while(i<=num/2){
        if(num%i == 0 ){
            prime=0;
            break;
        }
        i++;    
    }
    int temp=num;
    while(temp){
        sum+= temp%10;
        temp/=10;
    }
    if(sum == 14){
        checksum=1;
    }
    if(prime){
        if(checksum)
        printf("%d is a prime number.and sum is 14\n", num);
        else
        printf("%d is a prime number but sum is not 14\n", num);
    } else {
        if(checksum)
        printf("%d is not a prime number. But sum is 14\n", num);
        else
        printf("%d is not a prime number and sum is not 14\n", num);    
    }
}