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
        int arr[n];
        int ops = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] % 2 == arr[i + 1] % 2)
            {
                c++;
            }
            else
            {
                ops += c;
                c = 0;
            }
        }
        cout<<ops +c<<endl;
    }
}