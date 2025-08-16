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
            if(arr[i]<= 9999 && arr[i]>= 1000){
                if(arr[i]/1000 == arr[i]%10){
                    printf("Success\n");
                }
                else {
                    printf("Failure\n");
                }
            }


        }
        i++;
    }
    printf("The Total numbers are %d\n",total_num);
    
    return 0;
}