#include <stdio.h>

int intcon(int *src1,int *size1,int *src2,int *size2,int *dst){
    int i=0;
    for(i=0;i<*size1;i++){
        *(dst+i)=*(src1+i);
    }
    for(int j=0;j<*size2;j++){
        *(dst+i+j)=*(src2+j);
    }
    return 0;
}

int main(){
    int src1[5]={1,2,3,4,5};
    int size1=5;
    int src2[3]={6,7,8};
    int size2=3;
    int dst[8]={0};
    intcon(src1,&size1,src2,&size2,dst);
    for(int i=0;i<size1+size2;i++){
        printf("%d ", *(dst+i));
    }
    return 0;
}