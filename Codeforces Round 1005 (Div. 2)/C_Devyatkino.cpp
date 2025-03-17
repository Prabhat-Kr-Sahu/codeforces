#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 998244353
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


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        map<int, vector<int>>  mp;
        for(int i=0; i<n; i++){
            int dis= sqrt(points[i][0]*points[i][0] + points[i][1]* points[i][1] );
            mp[dis].push_back(i);    
        }
        vector<vector<int>> ans;
        for(auto i : mp){
            for(auto j: i.second){
                ans.push_back(points[j]);
                k--;
                if(k==0) break;
                
            }
                
            if(k==0){
                break;
            }
        }
        return ans;
    }
};

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        vector<vector<int>> points(n, vector<int>(2));
        
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }

        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());

        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}
