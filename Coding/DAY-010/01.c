#include <stdio.h>

int main(){
    int num[50], rev[50];
    printf("Enter the 50 digit num with spaces: ");
    for(int i=0;i<50;i++){
        scanf("%d",&num[i]);
    }

    // reverse
    for(int i=0;i<50;i++){
        rev[i] = num[49 - i];
    }

    printf("The original no: ");
    for(int i=0;i<50;i++){
        printf("%d",num[i]);
    }

    printf("\nThe rev no: ");
    for(int i=0;i<50;i++){
        printf("%d",rev[i]);
    }

    return 0;
}
