#include <stdio.h>
#include <stdbool.h>
bool isPrime(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int arr[] = {2, 4, 7, 5, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isPrime(arr, n)) {
        printf("có phần tử trùng lặp\n");
    }else {
        printf("không có phần tử trùng lặp\n");
    }
    return 0;
}