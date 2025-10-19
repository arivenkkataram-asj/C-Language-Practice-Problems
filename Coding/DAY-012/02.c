#include <stdio.h>

int memcopy(int *src,int *dst,int size){
    for(int i=0;i<size;i++){
        if(*(src+i)!=*(dst+i)){
            printf("Failure\n");
            return 0;
        }
    }
    return printf("Success\n");
}

int main(){
    int src[5]={1,2,3,4,5};
    int dst[5]={6,7,8,9,10};
    int dst2[5]={1,2,3,4,5};
    memcopy(src,dst,5);
    memcopy(src,dst2,5);
    return 0;
}