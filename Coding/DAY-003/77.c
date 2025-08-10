#include <stdio.h>

int disp_interchange_first_last_digit(){
   int num,last,first,middle,final=0,count=0,pow10=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num; 
    first = num%10; 
    while (temp)
    {
        count++;
        pow10 *= 10;
        temp /= 10;
    }
    pow10/=10;
    last = num/pow10;
    middle = (num/10)%(pow10/10);
    final = first*pow10 + middle*10 + last;
    return final;
}
int main(){
    int swapped_number = disp_interchange_first_last_digit();
    printf("The number with first and last digits swapped is: %d\n", swapped_number);
    return 0;
}