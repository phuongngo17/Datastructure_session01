#include <stdio.h>

void printfDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}
//biến đầu i =1 và trong những lần lặp thì i nhân đôi
// Mỗi vòng lặp thực hiện printf() độ phức tạp  0(1)
// suy ra độ phức tạp thời gian O(log n)