#include <stdio.h>

int main(){
    char str_num[11];
    int i,digit,num[10];
    printf("Enter the array of no with spaces: ");
    for( i=0;i<10;i++){
        scanf("%d",&digit);
        num[i]=digit;
        str_num[i]=digit + '0';
    }


    str_num[i]='\0';
    printf("the number to string %s",str_num);
}