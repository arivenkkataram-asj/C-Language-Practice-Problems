#include <stdio.h>

int main(){
    int num, count = 0,ones,last,middle,rev,pow10=1;
    printf("Enter a number: ");
    scanf("%d", &num);  
    ones = num % 10;
    for(int i = num; i != 0; i /= 10){
        pow10 *= 10;
        count++;
    }
    pow10 /= 10; 
    last = num / (pow10 );
    middle = (num / 10) % (pow10/10 );
    rev = ones * (pow10 ) + middle * 10 + last;
    printf("Output: %d \n%d\n%d\n%d\n",ones,last,middle, rev);
    return 0;
}