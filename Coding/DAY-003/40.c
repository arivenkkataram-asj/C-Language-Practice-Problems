#include <stdio.h>
void disp_assend();
int main(){
    disp_assend();
    return 0;
}

void disp_assend(){
    int i=1;
    while(i<6){
        printf("%d \n", i);
        i++;
    }
}