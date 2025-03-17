#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
cin >> n >> m >> k;

vector<int> a(m), q(k), f(n + 1, 0); // `f` is initialized with 0

// Read the list of questions excluded from each exam list
for (int i = 0; i < m; ++i) {
    cin >> a[i];
}

// Read the list of known questions and mark them in `f`
for (int i = 0; i < k; ++i) {
    cin >> q[i];
    f[q[i]] = 1;
}

// Case 1: If there are fewer known questions than needed to complete any exam
if (k < n - 1) {
    cout << string(m, '0') << endl;
}
// Case 2: If all questions are known
else if (k == n) {
    cout << string(m, '1') << endl;
}
// Case 3: Exactly one question is unknown
else {
    int x;
    // Find the question that is not known
    for (int i = 1; i <= n; ++i) {
        if (f[i] == 0) {
            x = i;
            break;
        }
    }

    // Build the result string
    string ans(m, '0');
    for (int i = 0; i < m; ++i) {
        if (a[i] == x) {
            ans[i] = '1';
        }
    }

    cout << ans << endl;
}

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
