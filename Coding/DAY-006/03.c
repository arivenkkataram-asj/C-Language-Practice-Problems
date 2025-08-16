#include <stdio.h>

int main(){
    int arr[100];
    int stop_loop=1,i=1,total_num=0,sum_numbers=0;
    while(stop_loop){
        printf("Enter the number %d is ",i);
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            stop_loop=0;
            break;
        }
        else {
            total_num++;
            sum_numbers+=arr[i];
        }
        i++;
    }
    printf("The Total numbers are %d\n",total_num);
    printf("The sum of numbers %d",sum_numbers);
    return 0;
}