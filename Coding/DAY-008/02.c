#include <stdio.h>

int main(){
    int num,num_bin=0,place = 1, arr[4]={0},i=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0){
        num_bin=num_bin+(num%2)*place;
        arr[i++]=num%2;
        place *= 10;
        num/=2;
    }
    printf("the bin num is %d\n",num_bin);
    printf("From the Array is ");
    for(int j=0;j<4;j++){
        printf("%d",arr[j]);
    }
}