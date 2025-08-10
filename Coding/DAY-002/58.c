#include <stdio.h>

int main(){
    int prime = 0,temp;
    temp=1;
    for(int i=3;i<=10;i++){
        
        temp=1;
        for(int j=3;j<=i/2;j++){
            if(i%j ==0){
            temp = 0;
            break;
            }
           
        }
        if(temp==1){
            prime++;
        }
}
    printf("%d\n", prime);
    return 0;
}