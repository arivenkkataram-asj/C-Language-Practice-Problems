#include <stdio.h>

int main() {
    int arr[100];
    int stop_loop = 1, i = 1, total_num = 0;

    while (stop_loop) {
        printf("Enter number %d (0 to stop): ", i);
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            stop_loop = 0;
            break;
        } else {
            total_num++;
        }
        i++;
    }

    for (int i = 0; i < total_num; i++) {
        for (int j = i + 1; j < total_num; j++) {
            if (arr[j] < arr[i]) {  
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("numbers (ascending): ");
    for (int i = 0; i < total_num; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
