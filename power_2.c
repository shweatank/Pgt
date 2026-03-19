#include <stdio.h>

int isPowerOfTwo(int n) {
    if ((n & (n - 1)) == 0)
        return 1;
    else
        return 0;
}

int main() {
    int num = 10;

    if (isPowerOfTwo(num))
        printf("Power of 2");
    else
        printf("Not a Power of 2");

    return 0;
}
