#include <bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout<<x<<endl
bool pow2(int n)
{
    return (n > 0) && (n & (n - 1)) == 0;
}
void solve()
{
       int n, x;
    cin >> n >> x;

    int bmax = 0; // Maximum total rounding up
    int bmin = 0; // Minimum total rounding down

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {   
        cin >> arr[i];
        bmax += (arr[i] + x - 1) / x; // Equivalent to ceil(arr[i] / x)
        bmin += arr[i];
    }

    bmin = (bmin + x - 1) / x; // Compute minimum total, rounded up

    cout << bmin << " " << bmax << endl;

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}