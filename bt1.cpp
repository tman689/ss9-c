#include <stdio.h>

int main() {
    int arr[100];
    int n, i, value, position;
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (1-%d): ", n + 1);
    scanf("%d", &position);
    if (position < 1 || position > n + 1) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;
    n++; 
    printf("Mang sau khi chen: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

