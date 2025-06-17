#include <stdio.h>
//xây dựng đếm số lần xuất hiện của một phần tử trong mảng
int countArray(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] ={2, 3, 9, 5, 7, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x =5;
    int result = countArray(arr, n, x);
    printf("phần tử %d xuất hiện %d lần trong mảng\n" ,x,result);
    return 0;
}
//duyệt qua toàn bộ mảng để đếm số lần xuất hiện của 1 số
// độ phức tạp O(n)