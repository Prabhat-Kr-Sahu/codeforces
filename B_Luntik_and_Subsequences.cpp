#include <bits/stdc++.h>
using namespace std;
#define int long long
int combinations(int n, int r) {
    if (r > n) return 0;
    return std::tgamma(n + 1) / (std::tgamma(r + 1) * std::tgamma(n - r + 1));
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int c0=0;
    int c1=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]==0){
            c0++;
        }
        else if(arr[i]==1){
            c1++;
        }

    }
    int ans= c1 * pow(2,c0);
    cout << ans << endl; 
    }



int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}