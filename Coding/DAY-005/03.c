#include <stdio.h>

int main(){
    int arr[5];
    int arr_even[5];
    int j=0;
    for(int i = 0; i < 5; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            arr_even[j] = arr[i];
            j++;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
    printf("\nEven numbers: ");
    for(int i=0;i<j;i++){
        printf("%d ", arr_even[i]);
    }
    return 0;
}