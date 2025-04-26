#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;

    vector<int> v(n, -1); // Initialize permutation with -1

    v[0] = 1; // Start with 1
    int curr = 1; // Start from 1
    vector<bool> used(n);
    used[0]= true;
    for (int i = 1; i < n; i++) {
        int pos= (curr + i)%n;
        if(used[pos]) {
            cout<<-1<<endl;
            return;
        }
        else{
            v[i]=pos+1;
        }
        curr++;
    }

    for (int x : v) cout << x << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
