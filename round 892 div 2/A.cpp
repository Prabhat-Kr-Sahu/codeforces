#include <bits/stdc++.h>
using namespace std;

#define loop(n)                 \
    for (int i = 0; i < n; ++i) \
    {                           \
        cin >> arr[i];          \
    }
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

        int max = -1;
        int min = 1000001;
        vector<int> b;
        vector<int> c;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                b.pb(arr[i]);
            }
            else if (arr[i] == max)
            {
                c.pb(arr[i]);
            }
            else if (arr[i] == min)
            {
                b.pb(arr[i]);
            }
            else{
                b.pb(arr[i]);
            }
        }

        if (b.size() != 0 and c.size() != 0)
        {
            cout << b.size() << ' ' << c.size() << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << ' ';
            }
            cout << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << ' ';
            }
           
        }
        else{
            cout<<-1<<endl;
        }
    
    }
}