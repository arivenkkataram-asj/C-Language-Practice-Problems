#include <stdio.h>

int main(){
    char str[50];
    int str_to_num=0;
    printf("Enter the string: ");
    scanf("%s",str);
    for(int i=0;str[i]!= '\0';i++){
        int digit = str[i]-'0';
        str_to_num = str_to_num*10+digit;
    }
    printf("The Integer Value = %d\n",str_to_num);
    return 0;
}