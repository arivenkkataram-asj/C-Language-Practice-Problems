#include <stdio.h>

int strcomp(char *src,char *dst){
    for(int i=0;*(src+i)!='\0';i++){
        if(*(src+i)!=*(dst+i)){
            printf("Failure\n");
            return 0;
        }
    }
    return printf("Success\n");
}

int main(){
    char src[20]="Hello World";
    char dst[20]="Hello World";
    char dst2[20]="I am Groot";
    strcomp(src,dst);
    strcomp(src,dst2);
    return 0;
}