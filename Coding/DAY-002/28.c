#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num/10 < num % 10){
        printf("Sucess\n");
    } else {
        printf("Failure\n");
    }
    return 0;
}