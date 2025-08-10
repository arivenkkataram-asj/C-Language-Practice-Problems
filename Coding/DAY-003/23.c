#include <stdio.h>
int main(){
    int num,last,middle,final=0,count=0,pow10=1;
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
        printf("Last digit is even, no change performed.%d\n",num);
        return 0;
    }
    else{
        middle = num%(pow10/10);
        final = (last-1)*pow10 + middle;
        printf("The number with last digit decremented is: %d\n", final);
        return 0;
    }
}