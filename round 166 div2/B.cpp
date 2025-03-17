// #include <iostream>
// #include <cmath>
// using namespace std;

// int min_diff(int b, int *arr, int n) {
//     int min_diff = abs(arr[0] - b);
//     int ele = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (abs(arr[i] - b) == 0) {
//             ele = arr[i];
//             break;
//         } else if (abs(arr[i] - b) < min_diff) {
//             min_diff = abs(arr[i] - b);
//             ele = arr[i];
//         }
//     }
//     return ele;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n + 1];
//         int b[n + 1];

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         for (int i = 0; i < n + 1; i++) {
//             cin >> b[i];
//         }

//         a[n] = min_diff(b[n], a, n);
        
//         int op = 1;
//         bool b_found=false;
//         for (int i = 0; i < n + 1; i++) {
//            if (a[i] != b[i]) {
//                 op = op + abs(a[i] - b[i]);
                
//                 if(b_found==false){
//                 while (a[i] != b[i]) {
//                     int k = (b[i] - a[i]);

//                     if (k > 0) {
//                         a[i] = a[i] + 1;
//                         if (abs(b[n] - a[n]) > abs(b[n] - a[i])) {
//                             a[n] = a[i];
//                         }
//                     }
//                     else if (k==0){
//                         b_found=true;
//                     }
                    
//                     else {
//                         a[i] = a[i] - 1;
//                         if (abs(b[n] - a[n]) > abs(b[n] - a[i])) {
//                             a[n] = a[i];
//                         }
//                     }
                    
//                 }
//                 }

                
//             }
//         }


//         cout << op << endl;                 
//     }
//     return 0;
// }




/// faster code copied-- as dont know greedy.


    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define endl '\n'
    ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}
     
    void solve()
    {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n+1);
        for(auto &i: a) cin>>i;
        for(auto &i: b) cin>>i;
        ll ans=0, diff=1e18;
        for(ll i=0; i<n; ++i)
        {
            ans += abs(a[i]-b[i]);
            diff = min(diff, abs(b[n]-a[i]));
            diff = min(diff, abs(b[n]-b[i]));
            if(b[n]>=min(a[i],b[i]) && b[n]<=max(a[i],b[i]))
                diff = 0;
        }
        cout<<ans+1+diff<<endl;
    }
     
    signed main()
    {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        int TCS = 1;
        cin >> TCS;
        for (int TC = 1; TC <= TCS; ++TC)
        {
            // cout<<"Case "<<TC<<": ";
            solve();
        }
    }

