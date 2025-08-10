#include <stdio.h>

int main() {
    int i , sum = 0;
    printf("Enter a number: ");
    scanf("%d", &i);
    loop: if (i) {
        sum =sum*10 + i%10;
        i /= 10;
        goto loop;
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}
