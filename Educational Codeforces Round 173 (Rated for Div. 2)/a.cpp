#include <bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout<<x<<endl
bool pow2(int n)
{
    return (n > 0) && (n & (n - 1)) == 0;
}
void solve()
{
    int n;cin>>n;
    if(n<4){
        cout<<1<<endl;
        return;
    }
    else{
        
        int count=0;
        int i=0;
        while(n!=0){
                n=n/4 ;
                if(i==0){
                count+= 2;
                i++;
                }
                else{
                    count=count*2;
                }
        }
        
        cout<<count/2<<endl;
        return;
    }

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
