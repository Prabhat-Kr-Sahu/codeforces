#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int xor_result = 0;
        int n;
        cin>>n;
        int arr[n];
        
        for (int i = 0; i < n; i++)
        { 
            cin>>arr[i];
            xor_result ^= arr[i];
        }
        
        if (xor_result == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << xor_result << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}