#include <stdio.h>
void check_words(char *str){
    int flag=0, j=0;
    for(int i=0;*(str+i)!='\0';i++){
        if(*(str+i)==' ' || *(str+i)=='\n' || *(str+i)=='\t'){
            flag++;
        }
    }    
    printf("The Number of Words in the String is : %d\n", flag+1);
}
int main(){
    char str[100];
    printf("Enter the String : ");
    gets(str);
    check_words(str);
    return 0;
}