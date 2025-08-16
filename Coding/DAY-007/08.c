#include <stdio.h>

int main(){

    char str[51],count=0,check=1;
    printf("Enter a string: ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        count++;
        if(str[i]< '0' || str[i]> '9'){
            check = 0;
            break;
        }
    }
    if(check && count<=50){
        printf("Valid\n");
    }else {
        printf("not Valid");
    }
}