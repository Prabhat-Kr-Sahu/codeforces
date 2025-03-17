#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,x,n) for(int i=x;i<n;i++)
#define rrep(i,x,n) for(int i=n;i>=x;i--)
#define endl '\n'
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define INF (int)1e18

const int M=1e9+7;

// Binary Exponentiation
int binExp(int a, int b) { int x = 1; while (b) { if (b & 1) x = (x * 1ll * a) % M; a = (a * 1ll * a) % M; b >>= 1; } return x; }

void Solve(){
    int n,m,k,q;
    string s;
    cin>>n;
    vi a(n),ind(n+1);
    rep(i,0,n){ cin>>a[i];ind[a[i]]=i;}
    if(a[0]!=1 && a[n-1]!=1){
        cout<<"No\n";
        return;
    }
    if(a[0]!=2 && a[n-1]!=2){
        cout<<"No\n";
        return;
    }
    set<int>st;
    multiset<int>ms;
    st.insert(0);
    st.insert(n-1);
    ms.insert(n);
    rep(i,3,n+1){
        int j=ind[i];
        auto rt=st.upper_bound(j);
        auto lt=--rt;
        rt++;
        int l=*lt,r=*rt;
        // cout<<l<<' '<<r<<endl;
        int mx=*ms.rbegin();
        if(mx%2==1 && mx>(r-l+1)){
            cout<<"No\n";
            return;
        }
        if(mx%2==0 && r-l+1<mx-1){
            cout<<"No\n";
            return;
        }
        if(j!=(l+r)/2 && j!=(l+r+1)/2){
            cout<<"No\n";
            return;
        }
        st.insert(j);
        ms.erase((r-l+1));
        ms.insert((r-j+1));
        ms.insert((j-l+1));
    }
    cout<<"Yes\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;cin>>t;
	while(t--) Solve();
    return 0;
}