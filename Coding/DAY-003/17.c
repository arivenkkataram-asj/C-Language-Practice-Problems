#include <stdio.h>

int main(){
    int i=10,sum=0;
    while (i<100){
        if(i%10 == 5)
        {
            sum+=i;
        }
        i++;
    }
    printf("Sum of numbers ending with 5 between 10 and 100 is: %d\n", sum);
    return 0;
}