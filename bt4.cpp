#include <stdio.h>
#define MAX_SIZE 100

void nhapMang(int arr[], int *n) {
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    int index, value;
    printf("Nhap vi tri muon them: ");
    scanf("%d", &index);
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);

    if (index >= 0 && index <= *n) {
        for (int i = *n; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        (*n)++;
        printf("Da them phan tu thanh cong!\n");
    } else {
        printf("Vi tri them khong hop le!\n");
    }
}

void suaPhanTu(int arr[], int n) {
    int index, newValue;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &index);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    if (index >= 0 && index < n) {
        arr[index] = newValue;
        printf("Da sua phan tu thanh cong!\n");
    } else {
        printf("Vi tri sua khong hop le!\n");
    }
}

void xoaPhanTu(int arr[], int *n) {
    int index;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &index);

    if (index >= 0 && index < *n) {
        for (int i = index; i < *n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
        printf("Da xoa phan tu thanh cong!\n");
    } else {
        printf("Vi tri xoa khong hop le!\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int n = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                themPhanTu(arr, &n);
                break;
            case 4:
                suaPhanTu(arr, n);
                break;
            case 5:
                xoaPhanTu(arr, &n);
                break;
            case 6:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}