#include <stdio.h>
int num;
int check_last_digit_odd(){
    int last,middle,final=0,count=0,pow10=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num; 
     
    while (temp)
    {
        count++;
        pow10 *= 10;
        temp /= 10;
    }
    pow10/=10;
    last = num/pow10;
    if(last%2 == 0){
        return num*10+1;
        
    }
    else{
        middle = num%(pow10);
        final = (last-1)*pow10 + middle;
        return final*10 + 0;
    }
    
}

int main(){
    int last_digit = check_last_digit_odd();
    
    if(last_digit%10){
        printf("Last digit is even, no change performed %d.\n",num);
    } else {
        printf("Last digit is odd: %d\n", last_digit/10);
    }
    return 0;
}