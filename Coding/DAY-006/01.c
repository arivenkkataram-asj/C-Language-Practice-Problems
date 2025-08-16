#include <stdio.h>

int main(){
    int arr[5],only_prime[5],k=0,checkprime=1;
    for(int i=0;i<5;i++){
        printf("Enter a number %d = ",i);
        scanf("%d",&arr[i]);

        int j=2,temp=arr[i];
        while(j<temp){
            if(arr[i] == 2){
                only_prime[k]=arr[i];
                k++;
                break;
            }
            else if(arr[i]%j == 0){
                checkprime =0;
                break;
            }
            j++;
        }
        if(checkprime){
            only_prime[k]=arr[i];
            k++;
        }
        j++;
    }

    for(int i=0;i<k;i++){
        printf("the number of prime %d is %d\n",i,only_prime[i]);
    }
}