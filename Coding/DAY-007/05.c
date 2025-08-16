#include<stdio.h>

int main(){
    char str[50];
    int num,i=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        int digit=temp%10;
        str[i++]=digit+'0';
        temp /=10;
    }
    str[i]='\0';
    for(int j=0;j<i/2;j++){ // this swap
        char t=str[j];
        str[j]=str[i-1-j];
        str[i-1-j]=t;
    }
    printf("The digit to string is %s",str);
    return 0;
}