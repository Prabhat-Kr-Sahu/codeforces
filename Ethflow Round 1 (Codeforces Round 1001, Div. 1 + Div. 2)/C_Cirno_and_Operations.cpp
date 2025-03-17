#include <bits/stdc++.h>
using namespace std;
#define int long long
// Recursive function to calculate the sum of differences

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
   
    
    while (n!= 1)
    {   
        int temp_sum=0;
       
        
        for (int i = 0; i < n-1; i++)
        {
            v[i] = v[i + 1] - v[i];
            temp_sum+=v[i];
        }
        sum= max(sum,abs(temp_sum));
        n--;
        
       
    }

    cout << sum << endl;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        solve(); // Solve each test case
    }

    return 0;
}
