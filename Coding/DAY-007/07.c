#include <stdio.h>

int main(){
    char str[50];
    int count=0;
    printf("Enter the string ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("The total No character in the string is %d",count);
    return 0;
}