#include <stdio.h>

int main(){
    int num,prime=1,temp;
    printf("Enter a number: ");     
    scanf("%d", &num);
    if(num < 2) {
        printf("Not a prime number\n");
        return 0;
    }
    else if(num == 2) {
        printf("Prime number\n");
        return 0;
    }
    else {
        if(num % 2 == 0) {
            prime = 0;
        } else {
            temp = 3;
            loop2: if(temp <= num/2 ) {
                if(num %temp == 0) {
                    prime = 0;
                    
                }
                temp++;
                goto loop2;
            }
        }
    }
    if(prime) {
        printf("Prime number\n");
    } else {
        printf("Not a prime number\n");
    }
}