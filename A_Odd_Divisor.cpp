#include<bits/stdc++.h>
using namespace std;
#define int long long
bool pow2(int n){
    return (n>0)&& (n&(n-1))==0;
}
void solve(){
    int n;
    cin>>n;
    cout<<(pow2(n) ? "NO" : "YES")<<endl;
    
}
int32_t main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}