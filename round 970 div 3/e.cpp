#include <bits/stdc++.h>
using namespace std;
#define int long long

// Function to count letters at even and odd positions and return the sum of max counts
int operation(const string &s, int n)
{
    map<char, int> even_cnt;
    map<char, int> odd_cnt;
    int even_max = -1;
    int odd_max = -1;
    // Iterate over the string and count characters at even and odd indices
    for (int i = 0; i < s.length(); ++i)
    {
        if (i % 2 == 0)
        { // Even index
            even_cnt[s[i]]++;
            if (even_cnt[s[i]] > even_max)
            {
                even_max = even_cnt[s[i]];
            }
        }
        else
        { // Odd index
            odd_cnt[s[i]]++;
            if (odd_cnt[s[i]] > odd_max)
            {
                odd_max = odd_cnt[s[i]];
            }
        }
    }

    // Return the sum of the maximum counts
    return n - even_max -odd_max;
}

void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n==1){
        cout<<1<<endl;
    }
    else if (n % 2 == 0)
    {
        int result = operation(s,n);
        cout << result << endl;
    }
    else
    {   
        int ops=1000000;
        for(int i=0; i<n; i++){
              string str= s;
               str.erase(i, 1);
              int result = operation(str,n);
              if(result<ops){
                ops=result;
              }
        }
        cout << ops << endl;
    }
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}