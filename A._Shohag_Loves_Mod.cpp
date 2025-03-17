#include <bits/stdc++.h>
using namespace std;
#define int long long
// void solve()
// {
// }
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    int arr[50];
    arr[0]=2;

    int j = 3;
    for (int i = 1; i < 50; i++)
    {
        
        while (j % (i + 1) != i)
        {
            j++;
        }
        arr[i] = j;
    }

    while (t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cout << arr[i] << " ";
        

    }
}