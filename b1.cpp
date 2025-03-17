
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int max=-1;
    int min=1000000;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    for(int i=0; i<n; i++){
        if(arr.size()!=1){
            if(i%2==0){
                // find the index of the max out of all maximums with minm number adjacent to it with respect to other maximas and remove it-
            }
            else{
                // find the index of the min out of all minimums with max number adjacent to it with respect to other minimas and remove it-
            
            }
        }
        else{
            break;
        }
    }
    cout<<arr[0]<<endl;
    
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