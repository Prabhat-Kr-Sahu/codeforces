#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define INF (int)1e18
#define print(x) cout << x << endl
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int pow(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}

void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    char maxc;
    int maxf = 0;
    char minc;
    int minf = INT_MAX; // Use a proper maximum value for initialization

    unordered_map<char, int> mp;

    // Count frequencies of each character
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    // Find character with max frequency and min frequency
    for (auto it : mp) {
        if (it.second > maxf) {
            maxf = it.second;
            maxc = it.first;
        }
        if (it.second < minf) {
            minf = it.second;
            minc = it.first;
        }
    }

    // Output the results
    // cout << "Max Char: " << maxc << " with frequency: " << maxf << endl;
    // cout << "Min Char: " << minc << " with frequency: " << minf << endl;

    // Replace first occurrence of minc with maxc
    for (int i = 0; i < s.size(); i++) {
        if(maxc==minc){
            if(mp[s[i]]==maxf){
                s[i]= maxc;
                break;
            }
        }
        if (s[i] == minc) {
            s[i] = maxc;
            break;
        }
    }

    cout <<  s << endl;
}


int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        Solve();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
