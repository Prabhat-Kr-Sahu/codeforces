#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0, index = -1, ele = -1;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (a[i] == b[i]) {
            cnt++;
            index = i;
            ele = a[i];
        }
    }

  
    if (n % 2 == 0) {
        if (cnt > 0) {
            cout << -1 << endl;
            return;
        }

        vector<int> mismatch;
        for (int i = 0; i < n / 2; i++) {
            if (a[i] != b[n - 1 - i]) {
                mismatch.push_back(i);
            }
        }

        int m = mismatch.size() / 2;
        cout << m << endl;
        for (int i = 0; i < m; i++) {
            int x = mismatch[i];
            int pos= find(b.begin()+ n/2, b.end(), a[x]) - b.begin();
            pos= pos-n/2;
            
            int y = mismatch[i + m];
            cout << x + 1 << " " << n/2-pos<< endl;
        }

    } else { 
        if (cnt > 1) {
            cout << -1 << endl;
            return;
        }

        vector<int> mismatch;
        for (int i = 0; i < n/2+1; i++) {
            if (a[i] != b[n - 1 - i]) {
                mismatch.push_back(i);
            }
        }

        vector<pair<int, int>> ops;

        if (cnt == 1 && index != n / 2) {
           
            ops.emplace_back(min(index, n / 2) + 1, max(index, n / 2) + 1);
            
            mismatch.erase(remove(mismatch.begin(), mismatch.end(), n / 2), mismatch.end());
            if(a[index-1] == b[n-1-index]){
                mismatch.erase(remove(mismatch.begin(), mismatch.end(), index-1), mismatch.end());
            }
        } 

        int m = mismatch.size() ;
        for (int i = 0; i < m; i++) {
            int x = mismatch[i];
            int pos= find(b.begin()+ n/2, b.end(), a[x]) - b.begin();
            pos= pos-n/2;
            
            int y = mismatch[i + m];
            cout << x + 1 << " " << n/2-pos<< endl;
        }

        cout << ops.size() << endl;
        for (auto &p : ops)
            cout << p.first << " " << p.second << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
