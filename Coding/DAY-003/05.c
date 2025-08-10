#include <stdio.h>

int main(){
    int count=0;
    for(int i=10;i<=100000;i++){
        int digit = i;
        int sum=0;  
        for(int j=digit;j>0;j/=10){
            sum += (j % 10);
        }
        if(sum == 14){
            count++;
        }
    }
    printf("The number of integers between 10 and 100000 whose digits sum to 14 is: %d\n", count);
    return 0;
}