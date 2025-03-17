#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(n+1, 0);  
        vector<int> arr(n);
        int max_c = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cnt[arr[i]]++;
            max_c = max(max_c, cnt[arr[i]]);
        }

        cout << n - max_c << endl;
    }
}
