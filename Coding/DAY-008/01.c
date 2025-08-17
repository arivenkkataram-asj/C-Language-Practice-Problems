#include <stdio.h>

int main(){
    
    for(char i=0;i<9;i++){//1000th digit
        for(char j=0;j<9;j++){//100th digit
            for(char k=0;k<9;k++){//10th digit
                for(char l=0;l<9;l++){
                    printf("%d%d%d%d ",i,j,k,l);
                }    
            }
            printf("\n");
        }

    }
}