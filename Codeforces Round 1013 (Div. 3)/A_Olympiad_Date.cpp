#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int nextPowerOf2(int num)
{
    if (num <= 0)
        return 1;
    int power = 1;
    while (power <= num)
    {
        power *= 2;
    }
    return power;
}

bool isPowerOf2(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int zero = 3;
    int one = 1;
    int three = 1;
    int two = 2;
    int five = 1;
    if(n<8){
        cout<<0<<endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            zero--;
        else if (v[i] == 1)
            one--;
        else if (v[i] == 2)
            two--;
        else if (v[i] == 3)
            three--;

        else if(v[i]==5)
            five--;

        if (zero <= 0 && one <= 0 && three <= 0 && two <= 0 && five <= 0)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
