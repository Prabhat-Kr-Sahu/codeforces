#include <bits/stdc++.h>
using namespace std;
#define int long long

long long removeConsecutive33(long long num)
{
    string str = to_string(num); // Convert number to string
    size_t pos;

    // Remove all occurrences of "33"
    while ((pos = str.find("33")) != string::npos)
    {
        str.erase(pos, 2); // Erase the "33" substring
    }
    if(str=="")
    {
        return 0;
    }
    return stoll(str); // Convert the modified string back to a number
}
void solve()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        n = removeConsecutive33(n);
        if (n == 0)
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            n -= 33;
            if (n == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
    return;
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