#include <stdio.h>

int count_prime_below_10(){
   int i=3,count_prime=0,prime,temp;

    while(i<=10){
        prime=1,temp=2;
        while(temp<=i/2){
            if(i%temp == 0 ){
                prime=0;
                break;
            }
            temp++; 
            }
        if(prime){
            count_prime++;
        }
         
        i++;
    }
    return count_prime + 1; 
}

int main(){
    int count = count_prime_below_10();
    printf("The count of prime numbers between 1 and 10 is: %d\n", count);
    return 0;
}