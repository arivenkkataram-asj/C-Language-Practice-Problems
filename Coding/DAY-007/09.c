#include<stdio.h>

int main(){
    char str[50],i=0; 
    printf("enter the string of numbers : ");
    scanf("%s",str);
   
    while(str[i]=='0' && str[i]!= '\0'){
        i++;
    }
    printf("%s\n",str+i);
    return 0;
}