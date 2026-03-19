#include <stdio.h>

int main() {
    int arr[] = {2,2,3};
    int n = 3;
    int result = 0;

    for(int i = 0; i < n; i++) {
        result = result ^ arr[i];
    }

    printf("Non-repeating element = %d", result);

    return 0;
}

