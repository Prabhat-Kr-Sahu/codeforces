
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
pair<int, int> findMinMax(int a, int b) {
    int minVal = (a < b) ? a : b;
    int maxVal = (a > b) ? a : b;
    return make_pair(minVal, maxVal);
}

void Solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    pair<int,int> min = findMinMax(x, y);
    int c = 0;

    c += min.first / k;
    if(min.first==x){
    if (min.first % k != 0)
    {
        c++;
    }

    c = 2 * c;
    c+=2*(min.second-min.first)/k;
    if((min.second-min.first)%k!=0 and ((min.second-min.first)/k!=0)){
        c+=2;
    }
    else if((min.second-min.first)%k!=0 and ((min.second-min.first)/k==0)){
        c+=1;
    }
    }
    else{
        if (min.first % k != 0)
    {
        c++;
    }

    c = 2 * c;
    c+=2*(min.second-min.first)/k;
    if((min.second-min.first)%k!=0 and ((min.second-min.first)/k!=0)){
        c+=2;
    }
    else if((min.second-min.first)%k!=0 and ((min.second-min.first)/k==0)){
        c+=1;
    }
    c--;
    }
    

    cout<<c<<endl;
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