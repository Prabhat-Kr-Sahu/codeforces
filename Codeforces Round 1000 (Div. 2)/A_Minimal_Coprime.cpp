#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
void solve(){
 int l,r; cin>>l>>r;
 
 if(l==r && l==1){
    cout<<1<<endl;
 }
 else{
    cout<<r-l<<endl;
 }
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}