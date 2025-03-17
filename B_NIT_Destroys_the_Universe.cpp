#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
// #define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define array_input(n, arr)     \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define array_output(n, arr)    \
    for (int i = 0; i < n; i++) \
    cout << arr[i] << endl
#define print_vec(vec)        \
    for (auto &value : vec)   \
        cout << value << " "; \
    cout << endl;
#define print(k) cout << k << endl
void solve()
{
    int n;
    cin >> n;
    int c = 0;
    vector<int> arr(n);
    bool not_zero_cont_start = false;
    bool not_zero_cont_end = false;
    int seg = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            c++;
        }
        if (arr[i] != 0 and not_zero_cont_start == false)
        {
            not_zero_cont_start = true;
        }
        else if ( arr[i]==0 and arr[i-1] != 0 and not_zero_cont_start == true)
        {
            not_zero_cont_end = true;
        }
        else if(arr[i] != 0 and not_zero_cont_start == true and not_zero_cont_end == true){
            seg++;
        }

    }
    if (c == n)
    {
        print(0);
    }
    else if (c == 0 or c == n - 1 or seg==0)
    {
        print(1);
    }
    else
    {
        print(2);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}