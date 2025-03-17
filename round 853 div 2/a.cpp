#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
int gcd(int a, int b)
{

    if (b == 0)
        return a;

    return gcd(b, a % b);
}
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

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (gcd(arr[i], arr[j]) <= 2)
                {
                    flag = true;
                    break;
                }
            }
        }

        cout << ((flag == true) ? "yes" : "no") << endl;
    }
}