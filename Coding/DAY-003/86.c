#include <stdio.h>

int disp_count_sum14(){
   int i = 100000,count=0;
    while(i>=10){
        int temp=i,sum=0;
        while(temp){
            sum += temp % 10;
            temp/=10;
        }
        if(sum == 14){
            count++;
        }
        i--;
    }
    return count;
    
}

int main(){
    int count = disp_count_sum14();
    printf("The count of numbers with digit sum 14 between 10 and 100000 is: %d\n", count);
    return 0;
}