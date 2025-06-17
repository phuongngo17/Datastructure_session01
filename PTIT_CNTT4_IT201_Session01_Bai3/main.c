#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n) {
    //cấp phát bộ nhớ cho mảng n phần tử kiểu int
    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}
//Bộ nhớ cấp phát là n * sizeof(int), phụ thuộc vào n phần tử
//i là biến đếm
//Độ phức tạp không gian: O(n)