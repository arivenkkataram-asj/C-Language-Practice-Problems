#include <stdio.h>

int main(){
    int num,out;
    printf("Enter a number: ");
    scanf("%d", &num);
    out = (num % 10) * 1000
            + ((num/10)%10)*100
            + ((num/100)%10)*10
            + (num/1000);
    printf("Output: %d\n", out);
    return 0;
}