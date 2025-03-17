
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isPerfectSquare(int num) {
    if (num < 0) {
        return false; // Negative numbers cannot be perfect squares
    }
    int sqrtValue = static_cast<int>(std::sqrt(num));
    return (sqrtValue * sqrtValue == num);
}

void Solve() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   int c=0;
   for(auto x:s){
    if(x=='0'){
        c++;
    }
   }
   if(isPerfectSquare(n)==true){
    if(c== n- 4* sqrt(n)+4){
       cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
   }
   else{
    cout<<"NO"<<endl;
   }
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