#include <stdio.h>
int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
//Duyệt qua vòng lặp n phần tử từ 1 đến n
//Suy ra độ phức tạp là: O(n)

//cách 2
#include <stdio.h>
int main(int n) {
    return n * (n + 1) / 2;
}
//Dùng phép tính đơn lẻ , k dùng vòng lặp
//suy ra độ phức tạp thời gian là: O(1)