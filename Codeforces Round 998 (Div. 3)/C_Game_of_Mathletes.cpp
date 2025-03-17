#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(v) v.begin(), v.end()

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    // Frequency map to count occurrences of each number
    map<int, int> freq;
    for (int num : x) {
        freq[num]++;
    }

    int score = 0;

    for (int num : x) {
        if (freq[num] > 0 && freq[k - num] > 0) {
            if (num == k - num) {
                // Special case: num + num = k
                score += freq[num] / 2;
                freq[num] = 0; // Mark as used
            } else {
                // General case: num + (k - num) = k
                int pairs = min(freq[num], freq[k - num]);
                score += pairs;
                freq[num] -= pairs;
                freq[k - num] -= pairs;
            }
        }
    }

    cout << score << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}