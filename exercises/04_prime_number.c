#include <stdio.h>
#include <math.h>

//查找100以内的最大素数

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int max = 0;

    for (int i = 2; i <= 100; i++) {
        if (is_prime(i)) {
            max = i;
        }
    }
    printf("max = %d\n", max);
    return 0;
}