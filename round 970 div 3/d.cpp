#include <bits/stdc++.h>
using namespace std;
#define int long long

void Solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    string s;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i]--;  // Adjust to zero-based indexing
    }

    cin >> s;

    vector<int> result(n, 0);
    vector<bool> visited(n, false);

    // Traverse each node to find all cycles
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            vector<int> cycle;
            int x = i;

            // Find all nodes in the current cycle
            while (!visited[x]) {
                cycle.push_back(x);
                visited[x] = true;
                x = arr[x];
            }

            // Count the number of black nodes in this cycle
            int black_count = 0;
            for (int node : cycle) {
                if (s[node] == '0') black_count++;
            }

            // Assign the count of black nodes to all nodes in the cycle
            for (int node : cycle) {
                result[node] = black_count;
            }
        }
    }

    // Print the results for this test case
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}
