#include <stdio.h>
void disp_odd();
int main(){
    disp_odd();
    return 0;
}

void disp_odd(){
    int i=1;
    while(i<10){
        if(i%2==1){
            printf("%d\n", i);
        }
        i++;
    }
}