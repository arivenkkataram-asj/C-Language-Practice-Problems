#include <stdio.h>
void disp_descend();
int main(){
    disp_descend();
    return 0;
}

void disp_descend(){
    int i=5;
    while(i>0){
        printf("%d \n", i);
        i--;
    }
}