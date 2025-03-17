#include <bits/stdc++.h>
using namespace std;

pair<int, int> farthest(vector<vector<int>> &adj, int n, int node)
{
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(node);
    vis[node] = true;
    int diameter = 0;
    int far_node = node;

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            int curr_node = q.front();
            q.pop();
            for (int j = 0; j < adj[curr_node].size(); j++)
            {
                if (!vis[adj[curr_node][j]])
                {
                    vis[adj[curr_node][j]] = true;
                    q.push(adj[curr_node][j]);
                }
            }
        }
        if (!q.empty())
        {
            diameter++;
        }
    }
    return make_pair(far_node, diameter);
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    int cnt = 0;
    if (n == 2)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (adj[i].size() != 1 && cnt < 2)
        {

            adj[adj[i][0]].erase(find(adj[adj[i][0]].begin(), adj[adj[i][0]].end(), i));
            adj[i].erase(find(adj[i].begin(), adj[i].end(), adj[i][0]));
            cnt++;
        }
    }

    pair<int, int> p = farthest(adj, n, 0);
    pair<int, int> q = farthest(adj, n, {p.first});

    cout << q.second << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}