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
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1)
        {
            cout<<"yes"<<endl;cout<<n<<endl;
            for (int i = 0; i < n; i++)
            {

                cout << 1 << ' ';
            }
            cout << endl;
        }
        else if (k == 1 or (k == 2 and n % 2 == 1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout <<"yes"<< endl;
            cout << n / 2 << endl;
            cout << (n % 2 == 1 ? 3 : 2);
            for (int i = 0; i < n / 2; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
    }
}