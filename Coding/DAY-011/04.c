#include <stdio.h>
void arrange_asccend(int *arr,int size){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(*(arr+i) < *(arr+j)){
                int temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
        }
    }
}
int main(){
    int numbers[]={3,2,4,1,5};
    int size=5;
    arrange_asccend(numbers,size);
    for(int i=0;i<5;i++){
        printf("%d\n",numbers[i]);
    }
    return 0;
}