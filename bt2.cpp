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
    printf("Nhap vi tri can sua (1-%d): ", n);
    scanf("%d", &position);
    if (position < 1 || position > n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[position - 1] = value;
    printf("Mang sau khi sua: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

