#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
   int n,m; cin>>n>>m;
   map<string,int> mp;
   vector<string> v;
   for(int i=0;i<n;i++)
   {
       string s; cin>>s;
       v[i]=s;
       mp[s]++;
   }
   vector<bool> v1(n,0);
   for(int i=0;i<m;i++)
   {
       for(int j=0; j<n; j++){
           string s; cin>>s;
           if(v[j] == s) {
               v1[j]=1;
           }
       }
   }
   if(count(v1.begin(),v1.end(),1)==n){
    cout<<-1<<endl;
    return;
   }
   
   cout<< n+2*mp.size()<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
