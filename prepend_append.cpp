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
        string s;
        cin >> s;
        int c = 0;
        if (n != 1)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] != s[n - i-1])
                {
                    c += 2;
                }
                else
                {
                    break;
                }
            }
             cout << n - c << endl;
        }
        else
        {
          cout << n << endl;
        }
       
    }
}