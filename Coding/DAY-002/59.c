#include <stdio.h>

int main(){
    int num,countodd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);  
    for(int i=num;i!=0;i/=10){
        if(i%2 != 0){
            countodd++;
        }
    }
    printf("The number of odd digits in %d is: %d\n", num, countodd);
    return 0;
}