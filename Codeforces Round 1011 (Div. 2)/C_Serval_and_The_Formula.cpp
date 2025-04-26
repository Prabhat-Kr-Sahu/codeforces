#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int nextPowerOf2(int num) {
    if (num <= 0) return 1;
    int power = 1;
    while (power <= num) {
        power *= 2;
    }
    return power;
}
   
bool isPowerOf2(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

void solve()
{
    int x, y;
    cin >> x >> y;
    if(x==y){
        cout<<-1<<endl;
        return;

    }
    if(isPowerOf2(x) && isPowerOf2(y)){
        cout<<0<<endl;
        return;
    }

    int maxm= max(x,y);
    int k = nextPowerOf2(maxm) - maxm;
    // k=0;
    
    if((x+y +2*k == ((x+k) ^ (y+k)))){
        cout << k << endl;
        
    }
    else{
        cout << -1<< endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
