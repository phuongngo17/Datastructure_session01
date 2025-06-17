#include <stdio.h>
void bubbSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        //lặp qua các phần tử chưa được sắp xếp
        for (int j = 0; j < n - i - 1; j++) {
            //hoán đổi vị trí nếu phần tử trước lớn hơn phần tử sau
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//kiểm tra độ phức tạp
int main(void) {
    int arr[] = { 1, 5, 2, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbSort(arr, n);

    printf("Mảng sau khi được sắp xếp: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
//Độ phức tạp là : O(n)