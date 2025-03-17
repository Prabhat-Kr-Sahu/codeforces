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
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define print(k) cout << k << endl

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a; res=res%mod;
        a = a * a;a=a%mod;
        b >>= 1;
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int max_distL = 0;
    int max_distR = 0;
    priority_queue<int> distL;
    priority_queue<int> distR;
    vector<int> sL(n);
    vector<int> sR(n);
    int itL = -1;
    int itR = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i != 0 && n > 1 and i % 2 == 1)
        {
            int diff = abs(v[i] - v[i - 1]);
            sL[i]=diff;
            distL.push(diff);
            if (max_distL < diff)
            {
                max_distL = diff;
                itL = i - 1;
            }
        }
        if (n > 1 and ((i % 2 == 0 and i != 0) or i == 0))
        {
            int diff = abs(v[n - 1 - i] - v[n - 1 - i - 1]);
            sR[i]=diff;
            distR.push(diff);
            if (max_distL < diff)
            {
                max_distL = diff;
                itR = i - 1;
            }
        }
    }

    if (n == 1)
    {
        print(1);
        return;
    }

    if (n % 2 == 0)
    {
        print(distL.top());
    }
    else
    {   
       
        if (sL[itL]==max_distL or itL==n-1)
        {

            distL.pop();
          
            print(distL.top());
        }
        else if (itR==0 or itR==n-1) 
        {
            distR.pop();
            print(distR.top());
        }
        else
        {
            distR.pop();
            distL.pop();

            distL.push((max_distL) / 2);
            distR.push((max_distR) / 2);
            print(min(distL.top(), distR.top()));
        }
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
