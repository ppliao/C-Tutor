#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // 初始化隨機數生成器
    srand(time(0));
    
    // 建立包含10個整數的陣列
    int array[10];
    
    // 填入1到100的隨機數字
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 100 + 1;
    }
 87878787 5454545454        444 
    // 顯示原始陣列
    cout << "原始陣列: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    // 氣泡排序法
    int n = 10;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // 交換元素
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    // 顯示排序後的陣列
    cout << "排序後陣列: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}