#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digits = 0;
    
    cout << "Enter a number: ";  // Prompt user for input
    cin >> num;

    int temp = num;  // Store original number in temp

    while (temp > 0) {
        sum += temp % 10;    // Get rightmost digit and add to sum
        digits++;           // Increment digit counter
        temp /= 10;         // Remove rightmost digit
    }

    cout << "Sum of digits: " << sum << endl;
    cout << "Number of digits: " << digits << endl;

    return 0;
}