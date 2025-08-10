#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 50){
        printf("Sucess\n");
    } else {
        printf("Failure\n");
    }
    return 0;
}