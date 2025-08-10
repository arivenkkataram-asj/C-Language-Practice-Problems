#include <stdio.h>

int main(){
    int num,prime = 1,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num%100;
    for(int i=3;i<=temp/2;i++){
        if(temp%i ==0){
            prime = 0;
            break;
        }
    }
    
    
    if(prime){
           printf("The number is prime.\n");
    }else{
        printf("The number is not prime.\n");
    }
    return 0;
}