#include <stdio.h>

int main(){
    int num,count=0,temp,pow10=1,last,middle;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    count1: if(temp){
        count++;
        temp /= 10;
        goto count1;
    }
    //power of 10
    temp = count;
    powloop: if(temp){
        pow10 *=10;
        temp--;
        goto powloop;
    }
    last = num/(pow10/10);
    if(last%2 == 0) printf("output: %d", num);
    else {
        middle = num%(pow10/10);
        printf("output: %d\n", (last-1)*(pow10/10)+middle );
    } 
    return 0;
}