#include <bits/stdc++.h>
using namespace std;
#define int long long

bool areNonZeroElementsContiguous(const vector<int>& arr) {
    int n = arr.size();

    // Find the first non-zero element
    int start = 0;
    while (start < n && arr[start] == 0) {
        start++;
    }

    // Find the last non-zero element
    int end = n - 1;
    while (end >= 0 && arr[end] == 0) {
        end--;
    }

    // Check for any zeros in the range [start, end]
    for (int i = start; i <= end; i++) {
        if (arr[i] == 0) {
            return false; // Found a zero between first and last non-zero elements
        }
    }

    return true; // Non-zero elements are contiguous
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            cnt++;
    }
   

    if (cnt == n)
    {
        cout << 0 << endl;
        return;
    }
    else if (areNonZeroElementsContiguous(v))
    {
        cout << 1 << endl;
        return;
    }
    
    else
    {
        cout << 2 << endl;
        return;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}