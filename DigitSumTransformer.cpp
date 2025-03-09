#include <iostream>
using namespace std;

// 計算數字和
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // 取最後一位數並加總
        n /= 10;       // 去掉最後一位數
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    // 持續計算數字和，直到 N 變成一位數
    while (N >= 10) {
        N = digitSum(N);
    }

    cout << N << endl;
    return 0;
}
