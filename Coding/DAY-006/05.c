#include <stdio.h>

int main(){
    int arr[100];
    int stop_loop=1,i=1,total_num=0;
    while(stop_loop){
        printf("Enter the number %d is ",i);
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            stop_loop=0;
            break;
        }
        else {
            total_num++;
        }
        i++;
    }
    int middle = (total_num%2 >= 5)? total_num/2+1: total_num/2;
    printf("The Total numbers are %d\n",total_num);
    printf("The middle number is %d\n",arr[middle]);
    return 0;
}