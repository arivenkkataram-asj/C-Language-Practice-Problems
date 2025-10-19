#include <stdio.h>
void check_sub_str_with_position(char *str,char *check_char){
    int flag=0, j=0;
    for(int i=0;*(str+i)!='\0';i++){
        if(*(str+i)==*(check_char+j)){
            j++;
            if(*(check_char+j)=='\0'){
                printf("The Sub String %s is found at position %d \n", check_char,i-j+2);
                flag=1;
                j=0;
            }
        }
        else{
            j=0;
        }
    }
    if(flag==0){
        printf("Sub String Not Found\n");
    }
}

int main(){
    char str[100];
    printf("Enter the String : ");
    scanf("%[^\n]s", str);
    char check_char[100];
    printf("Enter the Character to be searched : ");
    scanf(" %[^\n]", check_char);
    check_sub_str_with_position(str, check_char);
    return 0;
}