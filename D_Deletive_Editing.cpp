#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
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
    string s, t;
    cin >> s >> t;

    map<char, int> sa;
    map<char, int> ta;
    // count stored of t;
    for (int i = 0; i < t.size(); i++)
    {
        ta[t[i]]++;
    }

    int k = 0;
    vector<bool> flag(t.size(), false);
    // checking from front of t and d if cnt of t > ta then No-
    for (int i = 0; i < t.size(); i++)
    {
        if (i == 0 )
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (t[t.size() - 1 - i] == s[s.size() - 1 - j])
                {
                    k = j;
                    
                    flag[i] = true;
                    break;
                }
            }
            if (flag[i] == false and t.size()==1){
                print("No");

                return;
            }

            if (flag[i] == false ){
                print("No");

                return;
            }
            
        }
        else
        {
            int cnt = 0;
            for (int j = s.size()-k-1 ; j < s.size(); j++)
            {
                if (t[t.size() - 1 - i] == s[j])
                {
                    cnt++;
                   
                }
            }
            if (cnt >= ta[t[t.size() - 1 - i]])
            {   
               
                print("No");
               
                return;
            }

            for (int j = k+1; j <s.size() ; j++)
            {
                if (t[t.size() - 1 - i] == s[s.size() - 1 - j])
                {
                    k = j;
                    flag[i] = true;
                    break;
                }
            }
            if (flag[i] == false)
            {   
               
                print("No");
                return;
            }
        }
    }
    print("Yes");
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