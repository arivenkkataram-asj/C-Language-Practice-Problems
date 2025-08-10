#include <stdio.h>

int main(){
    int num,prime = 1,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=3;i<=num/2;i++){
        if(num%i ==0){
            prime = 0;
            break;
        }
    }
    
    for(int i=num;i!=0;i/=10){
        sum += i%10;
    }
    if(prime){
        if(sum == 14){
            printf("The number is prime and the sum of the digits is 14.\n");
        }else {
            printf("The number is prime but the sum of the digits is not 14.\n");
        }
           
    }else{
        if(sum == 14){
            printf("The number is not prime but the sum of the digits is 14.\n");
        }else {
            printf("The number is not prime and the sum of the digits is not 14.\n");
        }
    }   
    return 0;
}