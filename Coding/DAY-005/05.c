#include <stdio.h>

int main(){
    int arr[5],arr_except_prime[5];
    int j,k=0;
    int is_prime = 0;
    for(int i = 0; i < 5; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        if(arr[i]==2){
           is_prime = 1;
        }
        else{
            
            j = 2;
            while(j<arr[i]){
                if(arr[i]%j==0){
                    is_prime = 1;
                    break;
                }
                j++;
            }
            
        }
        if(is_prime == 0){
                arr_except_prime[k] = arr[i];
                k++;
            }
    }
    printf("Elements except prime numbers: ");
    for(int i=0;i<k;i++){
        printf("%d ", arr_except_prime[i]);
    }
    printf("\nAll elements: ");
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
}