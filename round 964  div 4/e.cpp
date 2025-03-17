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
    int arr[13];

    for (int i = 0; i < 13; i++)
    {
        arr[i] = pow(3, i);
    }
    while (t--)
    {
        int l, m;
        cin >> l >> m;
        int s = 0;
        
        for (int j = l; j < m+1 ; j++)
        {
            for (int k= 0; k < 13; k++)
            {
                if ( j < arr[k] and j == l)
                {
                    s += 2 * k;
                    break;
                }
                else if(j < arr[k] )
                {
                    s += k;
                    break;
                }
            }
        }
        cout << s << endl;
    }
}