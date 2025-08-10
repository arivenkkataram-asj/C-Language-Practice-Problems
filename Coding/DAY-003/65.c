#include <stdio.h>
int disp_count_sum14();
int main(){
    disp_count_sum14();
    return 0;
}

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
    printf("The count of numbers with digit sum 10 between 10 and 100000 is: %d\n", count);
    return 0;
    
}