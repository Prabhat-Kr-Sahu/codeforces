#include <bits/stdc++.h>
using namespace std;

#define loop(n)                 \
    for (int i = 0; i < n; ++i) \
    {                           \
    }
#define endl '\n'
#define pb(n) push_back(n)


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        long long  max = -1;
        int o_max = 0;
        vector<int> e_list;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                e_list.pb(arr[i]);
            }
            else if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        sort(e_list.begin(), e_list.end());

        if (e_list.size() == 0 or max == -1)
        {
            cout << 0 << endl;
            continue;
        }

        int i = 0;
        bool flag=true;
        for (int i = 0; i < e_list.size(); i++)
        {
            if (max > e_list[i])
            {
                max = max + e_list[i];
            }

            else
            {
                flag = false;

                break;
            }
        }
        cout<< ((flag)? e_list.size(): e_list.size()+1 )<< endl;
    }
}

