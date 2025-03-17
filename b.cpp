
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve()
{
    int n;
    vector<int> arr(n);
    int max = -1;
    int min = 1000000;
    map<int, vector<int>> it;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
        it[arr[i]].push_back(i);
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr.size() != 1)
        {
            if (i % 2 == 0)
            {    
                 int minm=100000000;
                 int itm=-1;
                 int k=-1;
                 for(int j=0; j<it[max].size(); j++){
                      if( it[max][j] +1 <n and arr[it[max][j] +1]<minm){
                        minm=arr[it[max][j] +1];
                        itm=it[max][j] +1;
                        k=j
                      }
                      if(it[max][j] -1 >=0 and arr[it[max][j]-1]<minm){
                        minm=arr[it[max][j] -1];
                        itm=it[max][j] -1;
                        k=j;
                      }
                 }
                 arr.erase(arr.begin()+itm);
                 it[minm].erase();

            }
            else
                {int minm=-1;
                 int itm=-1;
                 for(int j=0; j<it[min].size(); j++){
                      if( it[min][j] +1 <n and arr[it[min][j] +1]>minm){
                        minm=arr[it[min][j] +1];
                        itm=it[min][j] +1;
                      }
                      if(it[max][j] -1 >=0 and arr[it[max][j]-1]<minm){
                        minm=arr[it[max][j] -1];
                        itm=it[max][j] -1;
                      }
                 }
                 arr.erase(arr.begin()+itm);
                 it[max].erase(it[max].begin()+k);
                }
        }
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