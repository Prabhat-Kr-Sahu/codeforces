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

void Solve() {
    string s;
    cin >> s;
    
    int a = stoi(s.substr(0, 1));  // Extract the first number
    int b = stoi(s.substr(2, 1));  // Extract the second number
    char c = s[1];                // Extract the comparison operator as a char
    
    if ((a > b && c == '>') || (a < b && c == '<') || (a == b && c == '=')) {
        cout << s << endl; // Print the input string if the condition holds
    } 
    else if (a > b && c != '>') {
        s[1] =  '>';  // Adjust the first number to make the condition true
        cout << s << endl;
    } 
    else if (a < b && c != '<') {
        s[1] = '<';  // Change the operator to make the condition true
        cout << s << endl;
    } 
    else if (a == b && c != '=') {
        s[1] = '=';  // Change the operator to make the condition true
        cout << s << endl;
    }
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
