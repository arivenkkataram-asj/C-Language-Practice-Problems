#include <stdio.h>
void middle_2digits_prime();
int main(){
    middle_2digits_prime();
    return 0;
}

void middle_2digits_prime(){
   int num,prime0=1,prime1=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i=2;
    while(i<=((num%10)%100)/2){
        if((num%10)%100%i == 0 ){
            prime0=0;
            break;
        }
        i++;    
    }
   
    if(prime0){
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
}