#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    string path;
    cin >> path;

    //Debug print: Check if the input is read correctly
    cout << "Input grid size: " << n << "x" << m << endl;
    cout << "Path: " << path << endl;

    bool negative = false;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] < 0)
                negative = true;
        }
    }

    // Debug print: Check the grid after input
    cout << "Initial Grid:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // Track the path cells
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

    // Debug print: Check the path cells
    cout << "Path Cells:" << endl;
    for (auto cell : pathCells)
    {
        cout << "(" << cell.first << ", " << cell.second << ")" << endl;
    }

    // Calculate the target sum using the first row or first column
    int targetSum = 0;
    if (path[0] == 'D')
    {
        for (int i = 0; i < m; i++)
        {
            targetSum += grid[0][i];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            targetSum += grid[i][0];
        }
    }

    // Debug print: Check the calculated target sum
    cout << "Calculated target sum: " << targetSum << endl;

    // Calculating row and column sums
    int maxSum = 0;
    vector<long long> rowSum(n, 0), colSum(m, 0);
    for (int i = 0; i < n; i++)
    {
        rowSum[i] = accumulate(grid[i].begin(), grid[i].end(), 0LL);
        maxSum = max(maxSum, rowSum[i]);
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            colSum[j] += grid[i][j];
        }
        maxSum = max(maxSum, colSum[j]);
    }

    // Debug print: Check row and column sums
    cout << "Row sums: ";
    for (auto rs : rowSum)
    {
        cout << rs << " ";
    }
    cout << endl;

    cout << "Column sums: ";
    for (auto cs : colSum)
    {
        cout << cs << " ";
    }
    cout << endl;

    // Update grid cells based on targetSum and the flag 'negative'

    grid[0][0] = targetSum * -1;
    if (path[0] == 'D')
    {
        colSum[0] = colSum[0] + grid[0][0];
    }
    else
    {
        rowSum[0] = rowSum[0] + grid[0][0];
    }

    // Update grid for the rest of the path
    for (int i = 1; i < path.size(); i++)
    {
        if (path[i] == 'D')
        {
            if (path[i - 1] == 'D')
            {
                grid[pathCells[i].first][pathCells[i].second] = rowSum[i] * -1;
                colSum[i] = colSum[i] + grid[pathCells[i].first][pathCells[i].second];
            }
            else
            {
                grid[pathCells[i].first][pathCells[i].second] = colSum[i] * -1;
                rowSum[i] = rowSum[i] + grid[pathCells[i].first][pathCells[i].second];
            }
        }
        else
        {
            if (path[i - 1] == 'D')
            {
                grid[pathCells[i].first][pathCells[i].second] = colSum[i] * -1;
                rowSum[i] = rowSum[i] + grid[pathCells[i].first][pathCells[i].second];
            }
            else
            {
                grid[pathCells[i].first][pathCells[i].second] = rowSum[i] * -1;
                colSum[i] = colSum[i] + grid[pathCells[i].first][pathCells[i].second];
            }
        }
    }

    // Debug print: Check final grid before output
    cout << "Final Grid:" << endl;
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

    int t = 1;
    cin >> t;

    while (t--)
    {
        cout << "Final Grid:" << endl;
        solve();
    }

    return 0;
}
