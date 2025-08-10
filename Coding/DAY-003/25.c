#include <stdio.h>
int main(){
    int num,prime0=1,prime1=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i=2;
    while(i<=(num%100)/2){
        if(num%100%i == 0 ){
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