#include <stdio.h>

int main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=num;i!=0;i/=10){
        count++;
    }
    printf("OUtPUT: %d \n", count);
    return 0;
}