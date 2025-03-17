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
#define debug(k) cout << "debug " << k << endl
#define print2 (k, l) cout << k << " " << l << endl
#define print3 (k, l, m) cout << k << " " << l << " " << m << endl

// for sorting the indices of the array based on the values of the array--

// vector<int> ord(n);
// iota(ord.begin(), ord.end(), 0);
// stable_sort(ord.begin(), ord.end(), [&](int a, int b){ return arr[a] > arr[b]; });
long long binExponentiate(long long base, long long exp)
{
    long long result = 1; // Start with the result as 1
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {                   // If the exponent is odd
            result *= base; // Multiply the result by base
        }
        base *= base; // Square the base
        exp /= 2;     // Divide the exponent by 2
    }
    return result;
}

long long factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    string path;
    cin >> path;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    vector<pair<int, int>> pathCells;
    int x = 0, y = 0;
    pathCells.push_back({x, y});

    for (char step : path)
    {
        if (step == 'D')
            x++;
        else if (step == 'R')
            y++;
        pathCells.push_back({x, y});
    }

    vector<long long> rowSum(n, 0), colSum(m, 0);
    for (int i = 0; i < n; i++)
    {
        rowSum[i] = accumulate(grid[i].begin(), grid[i].end(), 0LL);
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            colSum[j] += grid[i][j];
        }
    }
    // print(1111);
    // print(path.size());
    // print(pathCells.size());

    if (path[0] == 'D')
    {
        grid[0][0] = rowSum[0] * -1;
        colSum[0] = colSum[0] + grid[0][0];
    }
    else
    {
        grid[0][0] = colSum[0] * -1;
        rowSum[0] = rowSum[0] + grid[0][0];
    }

    for (int i = 1; i < pathCells.size(); i++) // Use pathCells.size() instead of path.size() for clarity
    {
        int row = pathCells[i].first;
        int col = pathCells[i].second;

        
        if (path[i - 1] == 'D' and path[i] == 'D')
        {
            grid[row][col] = rowSum[row] * -1;
            colSum[col] += grid[row][col];
        }
        else if (path[i - 1] == 'R' && path[i] == 'R')
        {
            grid[row][col] = colSum[col] * -1;
         
            rowSum[row] += grid[row][col];
        }
        else if (path[i - 1] == 'R' && path[i] == 'D')
        {
            grid[row][col] = rowSum[row] * -1;
            colSum[col] += grid[row][col];
        }
        else
        {
            grid[row][col] = colSum[col] * -1;
           
            rowSum[row] += grid[row][col];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(0);
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
