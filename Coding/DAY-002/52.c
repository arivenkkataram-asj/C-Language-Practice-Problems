#include <stdio.h>

int main(){
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=num;i!=0;i/=10){
        rev = rev * 10 + i % 10;
    }
    printf("OUtPUT: %d \n", rev);
    return 0;
}