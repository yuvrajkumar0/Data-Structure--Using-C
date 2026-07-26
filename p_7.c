 #include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5, pos;

    printf("Original array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position");
    } 
    else {
        for (int i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;

        printf("Array after deletion: ");

        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
