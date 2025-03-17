#include <iostream>
using namespace std;

#define int long long
#define print(a) cout << a << endl
#define print2(a, b) cout << a << b << endl
const string subseq[]= {"00", "25", "50","75"};
const int INF =100;
int solve(string & s, string & t)

{
    int n=s.size();
    int ans=0;
    while(n>=0 && s[n-1]!= t[1]){
        n--;
        ans++;
    }
    if(n<0) return INF;
    
    n--;
    while(n>=0 && s[n-1] !=t[0]){
        n--;
        ans++;
    }
    
    return n<0 ? INF : ans;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {   
        string n;
        cin>>n;
        int ans = INF;
        for(auto i: subseq){
            ans= min(ans, solve(n,i));
        }
        cout<<ans<<endl;
        
    }
    return 0;
}