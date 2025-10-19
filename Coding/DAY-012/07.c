#include <stdio.h>

void check_char_with_position(char *str,char check_char){
    int flag=0;
    for(int i=0;*(str+i)!='\0';i++){
        if(*(str+i)==check_char){
            printf("The Character %c is found at position %d \n", check_char,i+1);
            flag=1;
        }
    }
    if(flag==0){
        printf("Character Not Found\n");
    }
}

int main(){
    char str[100];
    printf("Enter the String : ");
    scanf("%[^\n]s", str);
    char check_char;
    printf("Enter the Character to be searched : ");
    scanf(" %c", &check_char);
    check_char_with_position(str, check_char);
    return 0;
}