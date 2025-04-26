#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

 
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            v[i][j] = s[j] - '0';
        }
    }

    vector<vector<int>> row_ps(n, vector<int>(m, 0));
    vector<vector<int>> col_ps(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            row_ps[i][j] = v[i][j] + (j > 0 ? row_ps[i][j - 1] : 0);
            col_ps[i][j] = v[i][j] + (i > 0 ? col_ps[i - 1][j] : 0);
        }
    }

  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 1)
            {   
                // if(i==0 || j==0){
                //     continue;
                // }
                if (row_ps[i][j] == j+1 || col_ps[i][j] == i+1)
                {
                    continue;
                }
                else
                {   
                    // cout<<i<<" "<<j<<endl;
                    // cout<<row_ps[i][j]<<" "<<col_ps[i][j]<<endl;
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    cout << "YES" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
