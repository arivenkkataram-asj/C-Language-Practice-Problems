#include <stdio.h>

int main(){
    int arr1[5],sum=0;
    for(int i = 0; i < 5; i++){
        scanf(" %d", &arr1[i]);
        sum+= arr1[i];
    }
    int avg = sum / 5;
    printf("Average of values: %d\n", avg);
    printf("Sum of  values: %d\n", sum);
    return 0;
}