#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c; // Take input for a, b, c

    // Calculate the XOR for each pair and sum them up
    int result = (a ^ b) + (b ^ c) + (a ^ c);

    cout << result << endl; // Output the result

    return 0;
}
