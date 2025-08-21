#include <stdio.h>

int main(){
    char str_num[50];
    int num[50],i;
    printf("Enter the number: ");
    scanf("%s",str_num);
    for( i=0;str_num[i]!='\0';i++){
        num[i]=str_num[i]-'0';
    }
    str_num[i]='\0';
    printf("\nThe num in Int array: ");
    for(i=0;str_num[i]!='\0';i++){
        printf("%d ",num[i]);
    }
    return 0;
}