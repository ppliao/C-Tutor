#include <iostream>
using namespace std;

int main() {
    // �ϥΨ�h for �j�饴�L�E�E���k��
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}

