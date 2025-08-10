#include <stdio.h>

int main(){
    int num,countodd = 0,twodigit;;
    printf("Enter a number: ");
    scanf("%d", &num);  
    for(int i=num;i>=10;i/=10){
        twodigit = i % 100;
        if(twodigit%2 != 0){
            countodd++;
        }
    }
    printf("The number of odd digits in %d is: %d\n", num, countodd);
    return 0;
}