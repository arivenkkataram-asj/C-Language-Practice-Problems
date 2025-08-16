#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp = num;
    while(temp){
        printf("%c\n",temp%10+'0');
        temp/=10;
    }
    return 0;
}