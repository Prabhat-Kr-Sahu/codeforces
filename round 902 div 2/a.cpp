#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define loop(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define pb push_back

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n - 1];
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        cout << (-1) * sum << endl;
    }
}