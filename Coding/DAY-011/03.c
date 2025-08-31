#include<stdio.h>

void increment_array(int *arr, int size){
    for(int i=0;i<size;i++){
        *(arr+i) = *(arr+i)+1;
    }
}


#include <stdio.h>

int main() {
    int numbers[] = {2, 4, 6, 8, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    increment_array(numbers,size);
    for(int i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;

}