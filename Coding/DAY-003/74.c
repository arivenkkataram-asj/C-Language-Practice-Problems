#include <stdio.h>

int count_total_digits(){
    int count = 0;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num){
        count++;
        num /= 10;
    }
    return count;
}

int main(){
    int total_count = count_total_digits();
    printf("%d\n", total_count);
    return 0;
}