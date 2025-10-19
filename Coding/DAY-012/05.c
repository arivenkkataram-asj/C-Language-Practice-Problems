#include <stdio.h>

int strcon(char *src1,char *src2,char *dst){
    int i=0,j=0;
    for(i=0;*(src1+i)!='\0';i++){
        *(dst+i)=*(src1+i);
    }
    for(j=0;*(src2+j)!='\0';j++){
        *(dst+i+j)=*(src2+j);
    }
    *(dst+i+1+j)='\0';
    return 0;
}

int main(){
    char src1[20]="Hello ";
    char src2[20]="World !";
    char dst[40]="";
    strcon(src1,src2,dst);
    printf("%s", dst);
    return 0;
}