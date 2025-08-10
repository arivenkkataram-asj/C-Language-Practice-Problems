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
    if(last%2 == 0) {
        printf("Output: %d \n", num);
    }
    else {
        middle = (num / 10) % (pow10/10 );
        rev = (last-1) * (pow10 ) + middle * 10 + ones;
        printf("Output: %d\n",rev);
    }
    
    return 0;
}