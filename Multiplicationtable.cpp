#include <iostream>
using namespace std;

int main() {
    // 使用兩層 for 迴圈打印九九乘法表
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}

