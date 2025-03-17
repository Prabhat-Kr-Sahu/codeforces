
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

void Solve() {
    int l, r;
    cin >> l >> r;
    int ops = 0;
    set<int> s;

    
    for (int i = l; i <= r; i++) {
        s.insert(i);
    }
    // cout<<"------------new case----------------"<<endl;

    while (s.size() >= 3) {
        bool found = false;
        vector<int> toRemove;

       
        vector<int> v(s.begin(), s.end());

     
        for (size_t i = 0; i < v.size()-2; i++) {
            for (size_t j = v.size()-1; j >i; j--) {
                if (gcd(v[i], v[j]) == 1) {
                    for (size_t k = v.size()-2; k>j; k--) {
                        if (gcd(v[i], v[k]) == 1 && gcd(v[j], v[k]) == 1) {
                          
                            toRemove.push_back(v[i]);
                            toRemove.push_back(v[j]);
                            toRemove.push_back(v[k]);
                            found = true;
                            
                            break;
                        }
                    }
                }
                if (found) break;
            }
            if (found) break;
        }

        if (found) {
            for (int x : toRemove) {
                // cout<<x<<" ";
                // cout<<endl;
                s.erase(x);
            }
            ops++;
            // cout<<"OPS "<<ops<<endl;
        } else {
            // cout<<endl;
            // cout<<endl;
            break;
        }
    }
    
    cout << ops << endl;

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