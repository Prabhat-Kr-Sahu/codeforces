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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int c = 0;  
        int max_zeros = 0;  
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                c++;
            }
            else
            {
                max_zeros = max(max_zeros, c);
                c = 0;
            }
        }

     
        max_zeros = max(max_zeros, c);

        cout << max_zeros << endl;
    }

    return 0;
}
