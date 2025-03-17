#include <iostream>
#include <algorithm>
using namespace std;

long long max_profit(int n, int a, int b) {
    if (a>=b){
        int p=n*a;
        return p;
    }
    else{
    long long max_p = 0;
    int max_k = min(n, b);

    // Profit calculation for all possible k values from 0 to min(n, b)
    for (int k = 0; k <= max_k; k++) {
        long long p = 0;
        // Profit from first k buns sold at modified prices
        for (int i = 1; i <= k; i++) {
            p += (b - i + 1);
        }
        // Profit from the remaining buns sold at the usual price a
        p += (n - k) * (long long)a;
        // Update the maximum profit
        max_p = max(max_p, p);
    }

    return max_p;
    }
    }

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << max_profit(n, a, b) << endl;
    }

    return 0;
}
