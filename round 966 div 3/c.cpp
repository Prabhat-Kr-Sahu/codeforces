#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

int find_median(vector<int> &v)
{
    int size = v.size();
    sort(v.begin(), v.end());
    return v[(size - 1) / 2];
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
        for (int i = 0; i < n; i++)
        {     
            long long c;
            cin>>c;
            cout<< n+1-c<<' ';
        }
       
        cout << endl;
    }
}