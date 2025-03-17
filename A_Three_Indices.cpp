#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int long long

#define print(x) cout << x << endl
bool pow2(int n)
{
    return (n > 0) && (n & (n - 1)) == 0;
}
const int N = 2e5 + 5;
int a[N];
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    for(int i=2; i<n; i++){
        if(arr[i-2] < arr[i-1] && arr[i-1] > arr[i]){
            print("YES");
            
            cout<<i-1<<" "<<i<<" "<<i+1<<endl;
            return;
        }
    }
    print("NO");
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