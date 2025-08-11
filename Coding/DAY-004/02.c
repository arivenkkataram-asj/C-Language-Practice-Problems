#include <stdio.h>

int main(){
    int arr1[5],sum=0;
    scanf("%d", &arr1[0]);
    int min = arr1[0];
    for(int i = 1; i < 5; i++){
        scanf(" %d", &arr1[i]);
        if(arr1[i] < min) {
            min = arr1[i];
        }
    }
    printf("Minimum value: %d\n", min);
    return 0;
}