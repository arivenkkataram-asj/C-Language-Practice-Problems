#include <stdio.h>

int main(){
    int arr[5],rev_arr[5],rev=4,sum=0;
    printf("Enter the numbers with space ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        rev_arr[rev]=arr[i];
        rev--;
    }
    printf("the rev num array is ");
    for(int i=0;i<5;i++){
        printf("%d ",rev_arr[i]);
        sum+=rev_arr[i];
    }
    printf("the sum of array %d",sum);
    return 0;
}