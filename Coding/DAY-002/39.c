#include <stdio.h>

int main() {
    int num,last,first,middle,count,pow10=1,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    //count the number of digits
    temp = num;
    count1: if(temp){
        count++;
        temp /= 10;
        goto count1;
    }
    //power of 10
    temp = count;
    pow10: if(count){
        pow10 *=10;
        count--;
        goto pow10;
    }
    //find first, last and middle digits
    last = num % 10;
    first = num / (pow10/10);
    middle = (num/10)  % (pow10/100);
    printf("output: %d\n",last*pow10/10+middle*10+first);
    return 0;
}
