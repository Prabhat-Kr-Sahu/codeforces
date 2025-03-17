#include <iostream>
using namespace std;

void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {  // Assuming 32-bit integer
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main() {
    int num= 52;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Binary representation: ";
    printBinary(num);

    return 0;
}
