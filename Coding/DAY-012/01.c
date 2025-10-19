#include <stdio.h>
void strcopy(char *src,char *dst){
    while(*src != '\0'){
        *dst = *src; //This is pointing to the first character of the str address we are using the pointers 
        src++;  //Incrementing the Pointer Value to second character
        dst++; //Incrementing the Pointer Value to second character
    }
}
int main(){
    char dst[20]="";
    char src[20]="Hello World";
    strcopy(src,dst);
    printf("%s", dst);
    return 0;
}