#include <stdio.h>

int main() {
    int n[6] = {11, 20, 13, 14, 51, 6};
    int temp;

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {

            if (n[i] < n[j]) {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    printf("Array in ascending order: ");

    for (int i = 0; i < 6; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}